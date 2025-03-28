---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: A standard container made up of (key,value) pairs, which can be
    links:
    - http://www.gnu.org/licenses/>.
    - https://gcc.gnu.org/onlinedocs/libstdc++/manual/associative.html#containers.associative.insert_hints
  bundledCode: "#line 1 \"Map.hpp\"\n#include<ext/pb_ds/assoc_container.hpp>\n#include<ext/pb_ds/tree_policy.hpp>\n\
    // Map implementation -*- C++ -*-\n\n// Copyright (C) 2001-2023 Free Software\
    \ Foundation, Inc.\n//\n// This file is part of the GNU ISO C++ Library.  This\
    \ library is free\n// software; you can redistribute it and/or modify it under\
    \ the\n// terms of the GNU General Public License as published by the\n// Free\
    \ Software Foundation; either version 3, or (at your option)\n// any later version.\n\
    \n// This library is distributed in the hope that it will be useful,\n// but WITHOUT\
    \ ANY WARRANTY; without even the implied warranty of\n// MERCHANTABILITY or FITNESS\
    \ FOR A PARTICULAR PURPOSE.  See the\n// GNU General Public License for more details.\n\
    \n// Under Section 7 of GPL version 3, you are granted additional\n// permissions\
    \ described in the GCC Runtime Library Exception, version\n// 3.1, as published\
    \ by the Free Software Foundation.\n\n// You should have received a copy of the\
    \ GNU General Public License and\n// a copy of the GCC Runtime Library Exception\
    \ along with this program;\n// see the files COPYING3 and COPYING.RUNTIME respectively.\
    \  If not, see\n// <http://www.gnu.org/licenses/>.\n\n/*\n *\n * Copyright (c)\
    \ 1994\n * Hewlett-Packard Company\n *\n * Permission to use, copy, modify, distribute\
    \ and sell this software\n * and its documentation for any purpose is hereby granted\
    \ without fee,\n * provided that the above copyright notice appear in all copies\
    \ and\n * that both that copyright notice and this permission notice appear\n\
    \ * in supporting documentation.  Hewlett-Packard Company makes no\n * representations\
    \ about the suitability of this software for any\n * purpose.  It is provided\
    \ \"as is\" without express or implied warranty.\n *\n *\n * Copyright (c) 1996,1997\n\
    \ * Silicon Graphics Computer Systems, Inc.\n *\n * Permission to use, copy, modify,\
    \ distribute and sell this software\n * and its documentation for any purpose\
    \ is hereby granted without fee,\n * provided that the above copyright notice\
    \ appear in all copies and\n * that both that copyright notice and this permission\
    \ notice appear\n * in supporting documentation.  Silicon Graphics makes no\n\
    \ * representations about the suitability of this software for any\n * purpose.\
    \  It is provided \"as is\" without express or implied warranty.\n */\n\n/** @file\
    \ bits/stl_map.h\n *  This is an internal header file, included by other library\
    \ headers.\n *  Do not attempt to use it directly. @headername{map}\n */\n\n #ifndef\
    \ _STL_MAP_H\n #define _STL_MAP_H 1\n \n #include <bits/functexcept.h>\n #include\
    \ <bits/concept_check.h>\n #if __cplusplus >= 201103L\n #include <initializer_list>\n\
    \ #include <tuple>\n #endif\n \n namespace std _GLIBCXX_VISIBILITY(default)\n\
    \ {\n _GLIBCXX_BEGIN_NAMESPACE_VERSION\n _GLIBCXX_BEGIN_NAMESPACE_CONTAINER\n\
    \ \n   template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>\n\
    \     class multimap;\n \n   /**\n    *  @brief A standard container made up of\
    \ (key,value) pairs, which can be\n    *  retrieved based on a key, in logarithmic\
    \ time.\n    *\n    *  @ingroup associative_containers\n    *  @headerfile map\n\
    \    *  @since C++98\n    *\n    *  @tparam _Key  Type of key objects.\n    *\
    \  @tparam  _Tp  Type of mapped objects.\n    *  @tparam _Compare  Comparison\
    \ function object type, defaults to less<_Key>.\n    *  @tparam _Alloc  Allocator\
    \ type, defaults to\n    *                  allocator<pair<const _Key, _Tp>.\n\
    \    *\n    *  Meets the requirements of a <a href=\"tables.html#65\">container</a>,\
    \ a\n    *  <a href=\"tables.html#66\">reversible container</a>, and an\n    *\
    \  <a href=\"tables.html#69\">associative container</a> (using unique keys).\n\
    \    *  For a @c map<Key,T> the key_type is Key, the mapped_type is T, and the\n\
    \    *  value_type is std::pair<const Key,T>.\n    *\n    *  Maps support bidirectional\
    \ iterators.\n    *\n    *  The private tree data is declared exactly the same\
    \ way for map and\n    *  multimap; the distinction is made entirely in how the\
    \ tree functions are\n    *  called (*_unique versus *_equal, same as the standard).\n\
    \   */\n   template <typename _Key, typename _Tp, typename _Compare = std::less<_Key>,\n\
    \         typename _Alloc = std::allocator<std::pair<const _Key, _Tp> > >\n  \
    \   class map\n     {\n     public:\n       typedef _Key\t\t\t\t\tkey_type;\n\
    \       typedef _Tp\t\t\t\t\tmapped_type;\n       typedef std::pair<const _Key,\
    \ _Tp>\t\tvalue_type;\n       typedef _Compare\t\t\t\t\tkey_compare;\n       typedef\
    \ _Alloc\t\t\t\t\tallocator_type;\n \n     private:\n #ifdef _GLIBCXX_CONCEPT_CHECKS\n\
    \       // concept requirements\n       typedef typename _Alloc::value_type\t\t\
    _Alloc_value_type;\n # if __cplusplus < 201103L\n       __glibcxx_class_requires(_Tp,\
    \ _SGIAssignableConcept)\n # endif\n       __glibcxx_class_requires4(_Compare,\
    \ bool, _Key, _Key,\n                 _BinaryFunctionConcept)\n       __glibcxx_class_requires2(value_type,\
    \ _Alloc_value_type, _SameTypeConcept)\n #endif\n \n #if __cplusplus >= 201103L\n\
    \ #if __cplusplus > 201703L || defined __STRICT_ANSI__\n       static_assert(is_same<typename\
    \ _Alloc::value_type, value_type>::value,\n       \"std::map must have the same\
    \ value_type as its allocator\");\n #endif\n #endif\n \n     public:\n #pragma\
    \ GCC diagnostic push\n #pragma GCC diagnostic ignored \"-Wdeprecated-declarations\"\
    \n       class value_compare\n       : public std::binary_function<value_type,\
    \ value_type, bool>\n       {\n     friend class map<_Key, _Tp, _Compare, _Alloc>;\n\
    \       protected:\n     _Compare comp;\n \n     value_compare(_Compare __c)\n\
    \     : comp(__c) { }\n \n       public:\n     bool operator()(const value_type&\
    \ __x, const value_type& __y) const\n     { return comp(__x.first, __y.first);\
    \ }\n       };\n #pragma GCC diagnostic pop\n \n     private:\n       /// This\
    \ turns a red-black tree into a [multi]map.\n       typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template\n\
    \     rebind<value_type>::other _Pair_alloc_type;\n \n       typedef _Rb_tree<key_type,\
    \ value_type, _Select1st<value_type>,\n                key_compare, _Pair_alloc_type>\
    \ _Rep_type;\n \n       /// The actual tree structure.\n       _Rep_type _M_t;\n\
    \ \n       typedef __gnu_cxx::__alloc_traits<_Pair_alloc_type> _Alloc_traits;\n\
    \ \n #if __cplusplus >= 201703L\n       template<typename _Up, typename _Vp =\
    \ remove_reference_t<_Up>>\n     static constexpr bool __usable_key\n       =\
    \ __or_v<is_same<const _Vp, const _Key>,\n            __and_<is_scalar<_Vp>, is_scalar<_Key>>>;\n\
    \ #endif\n \n     public:\n       // many of these are specified differently in\
    \ ISO, but the following are\n       // \"functionally equivalent\"\n       typedef\
    \ typename _Alloc_traits::pointer\t\t pointer;\n       typedef typename _Alloc_traits::const_pointer\t\
    \ const_pointer;\n       typedef typename _Alloc_traits::reference\t\t reference;\n\
    \       typedef typename _Alloc_traits::const_reference\t const_reference;\n \
    \      typedef typename _Rep_type::iterator\t\t iterator;\n       typedef typename\
    \ _Rep_type::const_iterator\t const_iterator;\n       typedef typename _Rep_type::size_type\t\
    \t size_type;\n       typedef typename _Rep_type::difference_type\t difference_type;\n\
    \       typedef typename _Rep_type::reverse_iterator\t reverse_iterator;\n   \
    \    typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;\n\
    \ \n #if __cplusplus > 201402L\n       using node_type = typename _Rep_type::node_type;\n\
    \       using insert_return_type = typename _Rep_type::insert_return_type;\n #endif\n\
    \ \n       // [23.3.1.1] construct/copy/destroy\n       // (get_allocator() is\
    \ also listed in this section)\n \n       /**\n        *  @brief  Default constructor\
    \ creates no elements.\n        */\n #if __cplusplus < 201103L\n       map() :\
    \ _M_t() { }\n #else\n       map() = default;\n #endif\n \n       /**\n      \
    \  *  @brief  Creates a %map with no elements.\n        *  @param  __comp  A comparison\
    \ object.\n        *  @param  __a  An allocator object.\n        */\n       explicit\n\
    \       map(const _Compare& __comp,\n       const allocator_type& __a = allocator_type())\n\
    \       : _M_t(__comp, _Pair_alloc_type(__a)) { }\n \n       /**\n        *  @brief\
    \  %Map copy constructor.\n        *\n        *  Whether the allocator is copied\
    \ depends on the allocator traits.\n        */\n #if __cplusplus < 201103L\n \
    \      map(const map& __x)\n       : _M_t(__x._M_t) { }\n #else\n       map(const\
    \ map&) = default;\n \n       /**\n        *  @brief  %Map move constructor.\n\
    \        *\n        *  The newly-created %map contains the exact contents of the\
    \ moved\n        *  instance. The moved instance is a valid, but unspecified,\
    \ %map.\n        */\n       map(map&&) = default;\n \n       /**\n        *  @brief\
    \  Builds a %map from an initializer_list.\n        *  @param  __l  An initializer_list.\n\
    \        *  @param  __comp  A comparison object.\n        *  @param  __a  An allocator\
    \ object.\n        *\n        *  Create a %map consisting of copies of the elements\
    \ in the\n        *  initializer_list @a __l.\n        *  This is linear in N\
    \ if the range is already sorted, and NlogN\n        *  otherwise (where N is\
    \ @a __l.size()).\n        */\n       map(initializer_list<value_type> __l,\n\
    \       const _Compare& __comp = _Compare(),\n       const allocator_type& __a\
    \ = allocator_type())\n       : _M_t(__comp, _Pair_alloc_type(__a))\n       {\
    \ _M_t._M_insert_range_unique(__l.begin(), __l.end()); }\n \n       /// Allocator-extended\
    \ default constructor.\n       explicit\n       map(const allocator_type& __a)\n\
    \       : _M_t(_Pair_alloc_type(__a)) { }\n \n       /// Allocator-extended copy\
    \ constructor.\n       map(const map& __m, const __type_identity_t<allocator_type>&\
    \ __a)\n       : _M_t(__m._M_t, _Pair_alloc_type(__a)) { }\n \n       /// Allocator-extended\
    \ move constructor.\n       map(map&& __m, const __type_identity_t<allocator_type>&\
    \ __a)\n       noexcept(is_nothrow_copy_constructible<_Compare>::value\n     \
    \       && _Alloc_traits::_S_always_equal())\n       : _M_t(std::move(__m._M_t),\
    \ _Pair_alloc_type(__a)) { }\n \n       /// Allocator-extended initialier-list\
    \ constructor.\n       map(initializer_list<value_type> __l, const allocator_type&\
    \ __a)\n       : _M_t(_Pair_alloc_type(__a))\n       { _M_t._M_insert_range_unique(__l.begin(),\
    \ __l.end()); }\n \n       /// Allocator-extended range constructor.\n       template<typename\
    \ _InputIterator>\n     map(_InputIterator __first, _InputIterator __last,\n \
    \        const allocator_type& __a)\n     : _M_t(_Pair_alloc_type(__a))\n    \
    \ { _M_t._M_insert_range_unique(__first, __last); }\n #endif\n \n       /**\n\
    \        *  @brief  Builds a %map from a range.\n        *  @param  __first  An\
    \ input iterator.\n        *  @param  __last  An input iterator.\n        *\n\
    \        *  Create a %map consisting of copies of the elements from\n        *\
    \  [__first,__last).  This is linear in N if the range is\n        *  already\
    \ sorted, and NlogN otherwise (where N is\n        *  distance(__first,__last)).\n\
    \        */\n       template<typename _InputIterator>\n     map(_InputIterator\
    \ __first, _InputIterator __last)\n     : _M_t()\n     { _M_t._M_insert_range_unique(__first,\
    \ __last); }\n \n       /**\n        *  @brief  Builds a %map from a range.\n\
    \        *  @param  __first  An input iterator.\n        *  @param  __last  An\
    \ input iterator.\n        *  @param  __comp  A comparison functor.\n        *\
    \  @param  __a  An allocator object.\n        *\n        *  Create a %map consisting\
    \ of copies of the elements from\n        *  [__first,__last).  This is linear\
    \ in N if the range is\n        *  already sorted, and NlogN otherwise (where\
    \ N is\n        *  distance(__first,__last)).\n        */\n       template<typename\
    \ _InputIterator>\n     map(_InputIterator __first, _InputIterator __last,\n \
    \        const _Compare& __comp,\n         const allocator_type& __a = allocator_type())\n\
    \     : _M_t(__comp, _Pair_alloc_type(__a))\n     { _M_t._M_insert_range_unique(__first,\
    \ __last); }\n \n #if __cplusplus >= 201103L\n       /**\n        *  The dtor\
    \ only erases the elements, and note that if the elements\n        *  themselves\
    \ are pointers, the pointed-to memory is not touched in any\n        *  way. \
    \ Managing the pointer is the user's responsibility.\n        */\n       ~map()\
    \ = default;\n #endif\n \n       /**\n        *  @brief  %Map assignment operator.\n\
    \        *\n        *  Whether the allocator is copied depends on the allocator\
    \ traits.\n        */\n #if __cplusplus < 201103L\n       map&\n       operator=(const\
    \ map& __x)\n       {\n     _M_t = __x._M_t;\n     return *this;\n       }\n #else\n\
    \       map&\n       operator=(const map&) = default;\n \n       /// Move assignment\
    \ operator.\n       map&\n       operator=(map&&) = default;\n \n       /**\n\
    \        *  @brief  %Map list assignment operator.\n        *  @param  __l  An\
    \ initializer_list.\n        *\n        *  This function fills a %map with copies\
    \ of the elements in the\n        *  initializer list @a __l.\n        *\n   \
    \     *  Note that the assignment completely changes the %map and\n        * \
    \ that the resulting %map's size is the same as the number\n        *  of elements\
    \ assigned.\n        */\n       map&\n       operator=(initializer_list<value_type>\
    \ __l)\n       {\n     _M_t._M_assign_unique(__l.begin(), __l.end());\n     return\
    \ *this;\n       }\n #endif\n \n       /// Get a copy of the memory allocation\
    \ object.\n       allocator_type\n       get_allocator() const _GLIBCXX_NOEXCEPT\n\
    \       { return allocator_type(_M_t.get_allocator()); }\n \n       // iterators\n\
    \       /**\n        *  Returns a read/write iterator that points to the first\
    \ pair in the\n        *  %map.\n        *  Iteration is done in ascending order\
    \ according to the keys.\n        */\n       iterator\n       begin() _GLIBCXX_NOEXCEPT\n\
    \       { return _M_t.begin(); }\n \n       /**\n        *  Returns a read-only\
    \ (constant) iterator that points to the first pair\n        *  in the %map. \
    \ Iteration is done in ascending order according to the\n        *  keys.\n  \
    \      */\n       const_iterator\n       begin() const _GLIBCXX_NOEXCEPT\n   \
    \    { return _M_t.begin(); }\n \n       /**\n        *  Returns a read/write\
    \ iterator that points one past the last\n        *  pair in the %map.  Iteration\
    \ is done in ascending order\n        *  according to the keys.\n        */\n\
    \       iterator\n       end() _GLIBCXX_NOEXCEPT\n       { return _M_t.end();\
    \ }\n \n       /**\n        *  Returns a read-only (constant) iterator that points\
    \ one past the last\n        *  pair in the %map.  Iteration is done in ascending\
    \ order according to\n        *  the keys.\n        */\n       const_iterator\n\
    \       end() const _GLIBCXX_NOEXCEPT\n       { return _M_t.end(); }\n \n    \
    \   /**\n        *  Returns a read/write reverse iterator that points to the last\
    \ pair in\n        *  the %map.  Iteration is done in descending order according\
    \ to the\n        *  keys.\n        */\n       reverse_iterator\n       rbegin()\
    \ _GLIBCXX_NOEXCEPT\n       { return _M_t.rbegin(); }\n \n       /**\n       \
    \ *  Returns a read-only (constant) reverse iterator that points to the\n    \
    \    *  last pair in the %map.  Iteration is done in descending order\n      \
    \  *  according to the keys.\n        */\n       const_reverse_iterator\n    \
    \   rbegin() const _GLIBCXX_NOEXCEPT\n       { return _M_t.rbegin(); }\n \n  \
    \     /**\n        *  Returns a read/write reverse iterator that points to one\
    \ before the\n        *  first pair in the %map.  Iteration is done in descending\
    \ order\n        *  according to the keys.\n        */\n       reverse_iterator\n\
    \       rend() _GLIBCXX_NOEXCEPT\n       { return _M_t.rend(); }\n \n       /**\n\
    \        *  Returns a read-only (constant) reverse iterator that points to one\n\
    \        *  before the first pair in the %map.  Iteration is done in descending\n\
    \        *  order according to the keys.\n        */\n       const_reverse_iterator\n\
    \       rend() const _GLIBCXX_NOEXCEPT\n       { return _M_t.rend(); }\n \n #if\
    \ __cplusplus >= 201103L\n       /**\n        *  Returns a read-only (constant)\
    \ iterator that points to the first pair\n        *  in the %map.  Iteration is\
    \ done in ascending order according to the\n        *  keys.\n        */\n   \
    \    const_iterator\n       cbegin() const noexcept\n       { return _M_t.begin();\
    \ }\n \n       /**\n        *  Returns a read-only (constant) iterator that points\
    \ one past the last\n        *  pair in the %map.  Iteration is done in ascending\
    \ order according to\n        *  the keys.\n        */\n       const_iterator\n\
    \       cend() const noexcept\n       { return _M_t.end(); }\n \n       /**\n\
    \        *  Returns a read-only (constant) reverse iterator that points to the\n\
    \        *  last pair in the %map.  Iteration is done in descending order\n  \
    \      *  according to the keys.\n        */\n       const_reverse_iterator\n\
    \       crbegin() const noexcept\n       { return _M_t.rbegin(); }\n \n      \
    \ /**\n        *  Returns a read-only (constant) reverse iterator that points\
    \ to one\n        *  before the first pair in the %map.  Iteration is done in\
    \ descending\n        *  order according to the keys.\n        */\n       const_reverse_iterator\n\
    \       crend() const noexcept\n       { return _M_t.rend(); }\n #endif\n \n \
    \      // capacity\n       /** Returns true if the %map is empty.  (Thus begin()\
    \ would equal\n        *  end().)\n       */\n       _GLIBCXX_NODISCARD bool\n\
    \       empty() const _GLIBCXX_NOEXCEPT\n       { return _M_t.empty(); }\n \n\
    \       /** Returns the size of the %map.  */\n       size_type\n       size()\
    \ const _GLIBCXX_NOEXCEPT\n       { return _M_t.size(); }\n \n       /** Returns\
    \ the maximum size of the %map.  */\n       size_type\n       max_size() const\
    \ _GLIBCXX_NOEXCEPT\n       { return _M_t.max_size(); }\n \n       // [23.3.1.2]\
    \ element access\n       /**\n        *  @brief  Subscript ( @c [] ) access to\
    \ %map data.\n        *  @param  __k  The key for which data should be retrieved.\n\
    \        *  @return  A reference to the data of the (key,data) %pair.\n      \
    \  *\n        *  Allows for easy lookup with the subscript ( @c [] )\n       \
    \ *  operator.  Returns data associated with the key specified in\n        * \
    \ subscript.  If the key does not exist, a pair with that key\n        *  is created\
    \ using default values, which is then returned.\n        *\n        *  Lookup\
    \ requires logarithmic time.\n        */\n       mapped_type&\n       operator[](const\
    \ key_type& __k)\n       {\n     // concept requirements\n     __glibcxx_function_requires(_DefaultConstructibleConcept<mapped_type>)\n\
    \ \n     iterator __i = lower_bound(__k);\n     // __i->first is greater than\
    \ or equivalent to __k.\n     if (__i == end() || key_comp()(__k, (*__i).first))\n\
    \ #if __cplusplus >= 201103L\n       __i = _M_t._M_emplace_hint_unique(__i, std::piecewise_construct,\n\
    \                         std::tuple<const key_type&>(__k),\n                \
    \         std::tuple<>());\n #else\n       __i = insert(__i, value_type(__k, mapped_type()));\n\
    \ #endif\n     return (*__i).second;\n       }\n \n #if __cplusplus >= 201103L\n\
    \       mapped_type&\n       operator[](key_type&& __k)\n       {\n     // concept\
    \ requirements\n     __glibcxx_function_requires(_DefaultConstructibleConcept<mapped_type>)\n\
    \ \n     iterator __i = lower_bound(__k);\n     // __i->first is greater than\
    \ or equivalent to __k.\n     if (__i == end() || key_comp()(__k, (*__i).first))\n\
    \       __i = _M_t._M_emplace_hint_unique(__i, std::piecewise_construct,\n   \
    \                  std::forward_as_tuple(std::move(__k)),\n                  \
    \   std::tuple<>());\n     return (*__i).second;\n       }\n #endif\n \n     \
    \  // _GLIBCXX_RESOLVE_LIB_DEFECTS\n       // DR 464. Suggestion for new member\
    \ functions in standard containers.\n       /**\n        *  @brief  Access to\
    \ %map data.\n        *  @param  __k  The key for which data should be retrieved.\n\
    \        *  @return  A reference to the data whose key is equivalent to @a __k,\
    \ if\n        *           such a data is present in the %map.\n        *  @throw\
    \  std::out_of_range  If no such data is present.\n        */\n       mapped_type&\n\
    \       at(const key_type& __k)\n       {\n     iterator __i = lower_bound(__k);\n\
    \     if (__i == end() || key_comp()(__k, (*__i).first))\n       __throw_out_of_range(__N(\"\
    map::at\"));\n     return (*__i).second;\n       }\n \n       const mapped_type&\n\
    \       at(const key_type& __k) const\n       {\n     const_iterator __i = lower_bound(__k);\n\
    \     if (__i == end() || key_comp()(__k, (*__i).first))\n       __throw_out_of_range(__N(\"\
    map::at\"));\n     return (*__i).second;\n       }\n \n       // modifiers\n #if\
    \ __cplusplus >= 201103L\n       /**\n        *  @brief Attempts to build and\
    \ insert a std::pair into the %map.\n        *\n        *  @param __args  Arguments\
    \ used to generate a new pair instance (see\n        *\t        std::piecewise_contruct\
    \ for passing arguments to each\n        *\t        part of the pair constructor).\n\
    \        *\n        *  @return  A pair, of which the first element is an iterator\
    \ that points\n        *           to the possibly inserted pair, and the second\
    \ is a bool that\n        *           is true if the pair was actually inserted.\n\
    \        *\n        *  This function attempts to build and insert a (key, value)\
    \ %pair into\n        *  the %map.\n        *  A %map relies on unique keys and\
    \ thus a %pair is only inserted if its\n        *  first element (the key) is\
    \ not already present in the %map.\n        *\n        *  Insertion requires logarithmic\
    \ time.\n        */\n       template<typename... _Args>\n     std::pair<iterator,\
    \ bool>\n     emplace(_Args&&... __args)\n     {\n #if __cplusplus >= 201703L\n\
    \       if constexpr (sizeof...(_Args) == 2)\n         if constexpr (is_same_v<allocator_type,\
    \ allocator<value_type>>)\n           {\n         auto&& [__a, __v] = pair<_Args&...>(__args...);\n\
    \         if constexpr (__usable_key<decltype(__a)>)\n           {\n         \
    \    const key_type& __k = __a;\n             iterator __i = lower_bound(__k);\n\
    \             if (__i == end() || key_comp()(__k, (*__i).first))\n           \
    \    {\n             __i = emplace_hint(__i, std::forward<_Args>(__args)...);\n\
    \             return {__i, true};\n               }\n             return {__i,\
    \ false};\n           }\n           }\n #endif\n       return _M_t._M_emplace_unique(std::forward<_Args>(__args)...);\n\
    \     }\n \n       /**\n        *  @brief Attempts to build and insert a std::pair\
    \ into the %map.\n        *\n        *  @param  __pos  An iterator that serves\
    \ as a hint as to where the pair\n        *                should be inserted.\n\
    \        *  @param  __args  Arguments used to generate a new pair instance (see\n\
    \        *\t         std::piecewise_contruct for passing arguments to each\n \
    \       *\t         part of the pair constructor).\n        *  @return An iterator\
    \ that points to the element with key of the\n        *          std::pair built\
    \ from @a __args (may or may not be that\n        *          std::pair).\n   \
    \     *\n        *  This function is not concerned about whether the insertion\
    \ took place,\n        *  and thus does not return a boolean like the single-argument\
    \ emplace()\n        *  does.\n        *  Note that the first parameter is only\
    \ a hint and can potentially\n        *  improve the performance of the insertion\
    \ process. A bad hint would\n        *  cause no gains in efficiency.\n      \
    \  *\n        *  See\n        *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/associative.html#containers.associative.insert_hints\n\
    \        *  for more on @a hinting.\n        *\n        *  Insertion requires\
    \ logarithmic time (if the hint is not taken).\n        */\n       template<typename...\
    \ _Args>\n     iterator\n     emplace_hint(const_iterator __pos, _Args&&... __args)\n\
    \     {\n       return _M_t._M_emplace_hint_unique(__pos,\n                  \
    \        std::forward<_Args>(__args)...);\n     }\n #endif\n \n #if __cplusplus\
    \ > 201402L\n       /// Extract a node.\n       node_type\n       extract(const_iterator\
    \ __pos)\n       {\n     __glibcxx_assert(__pos != end());\n     return _M_t.extract(__pos);\n\
    \       }\n \n       /// Extract a node.\n       node_type\n       extract(const\
    \ key_type& __x)\n       { return _M_t.extract(__x); }\n \n       /// Re-insert\
    \ an extracted node.\n       insert_return_type\n       insert(node_type&& __nh)\n\
    \       { return _M_t._M_reinsert_node_unique(std::move(__nh)); }\n \n       ///\
    \ Re-insert an extracted node.\n       iterator\n       insert(const_iterator\
    \ __hint, node_type&& __nh)\n       { return _M_t._M_reinsert_node_hint_unique(__hint,\
    \ std::move(__nh)); }\n \n       template<typename, typename>\n     friend struct\
    \ std::_Rb_tree_merge_helper;\n \n       template<typename _Cmp2>\n     void\n\
    \     merge(map<_Key, _Tp, _Cmp2, _Alloc>& __source)\n     {\n       using _Merge_helper\
    \ = _Rb_tree_merge_helper<map, _Cmp2>;\n       _M_t._M_merge_unique(_Merge_helper::_S_get_tree(__source));\n\
    \     }\n \n       template<typename _Cmp2>\n     void\n     merge(map<_Key, _Tp,\
    \ _Cmp2, _Alloc>&& __source)\n     { merge(__source); }\n \n       template<typename\
    \ _Cmp2>\n     void\n     merge(multimap<_Key, _Tp, _Cmp2, _Alloc>& __source)\n\
    \     {\n       using _Merge_helper = _Rb_tree_merge_helper<map, _Cmp2>;\n   \
    \    _M_t._M_merge_unique(_Merge_helper::_S_get_tree(__source));\n     }\n \n\
    \       template<typename _Cmp2>\n     void\n     merge(multimap<_Key, _Tp, _Cmp2,\
    \ _Alloc>&& __source)\n     { merge(__source); }\n #endif // C++17\n \n #if __cplusplus\
    \ > 201402L\n #define __cpp_lib_map_try_emplace 201411L\n       /**\n        *\
    \  @brief Attempts to build and insert a std::pair into the %map.\n        *\n\
    \        *  @param __k    Key to use for finding a possibly existing pair in\n\
    \        *                the map.\n        *  @param __args  Arguments used to\
    \ generate the .second for a new pair\n        *                instance.\n  \
    \      *\n        *  @return  A pair, of which the first element is an iterator\
    \ that points\n        *           to the possibly inserted pair, and the second\
    \ is a bool that\n        *           is true if the pair was actually inserted.\n\
    \        *\n        *  This function attempts to build and insert a (key, value)\
    \ %pair into\n        *  the %map.\n        *  A %map relies on unique keys and\
    \ thus a %pair is only inserted if its\n        *  first element (the key) is\
    \ not already present in the %map.\n        *  If a %pair is not inserted, this\
    \ function has no effect.\n        *\n        *  Insertion requires logarithmic\
    \ time.\n        */\n       template <typename... _Args>\n     pair<iterator,\
    \ bool>\n     try_emplace(const key_type& __k, _Args&&... __args)\n     {\n  \
    \     iterator __i = lower_bound(__k);\n       if (__i == end() || key_comp()(__k,\
    \ (*__i).first))\n         {\n           __i = emplace_hint(__i, std::piecewise_construct,\n\
    \                  std::forward_as_tuple(__k),\n                  std::forward_as_tuple(\n\
    \                    std::forward<_Args>(__args)...));\n           return {__i,\
    \ true};\n         }\n       return {__i, false};\n     }\n \n       // move-capable\
    \ overload\n       template <typename... _Args>\n     pair<iterator, bool>\n \
    \    try_emplace(key_type&& __k, _Args&&... __args)\n     {\n       iterator __i\
    \ = lower_bound(__k);\n       if (__i == end() || key_comp()(__k, (*__i).first))\n\
    \         {\n           __i = emplace_hint(__i, std::piecewise_construct,\n  \
    \                std::forward_as_tuple(std::move(__k)),\n                  std::forward_as_tuple(\n\
    \                    std::forward<_Args>(__args)...));\n           return {__i,\
    \ true};\n         }\n       return {__i, false};\n     }\n \n       /**\n   \
    \     *  @brief Attempts to build and insert a std::pair into the %map.\n    \
    \    *\n        *  @param  __hint  An iterator that serves as a hint as to where\
    \ the\n        *                  pair should be inserted.\n        *  @param\
    \ __k    Key to use for finding a possibly existing pair in\n        *       \
    \         the map.\n        *  @param __args  Arguments used to generate the .second\
    \ for a new pair\n        *                instance.\n        *  @return An iterator\
    \ that points to the element with key of the\n        *          std::pair built\
    \ from @a __args (may or may not be that\n        *          std::pair).\n   \
    \     *\n        *  This function is not concerned about whether the insertion\
    \ took place,\n        *  and thus does not return a boolean like the single-argument\n\
    \        *  try_emplace() does. However, if insertion did not take place,\n  \
    \      *  this function has no effect.\n        *  Note that the first parameter\
    \ is only a hint and can potentially\n        *  improve the performance of the\
    \ insertion process. A bad hint would\n        *  cause no gains in efficiency.\n\
    \        *\n        *  See\n        *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/associative.html#containers.associative.insert_hints\n\
    \        *  for more on @a hinting.\n        *\n        *  Insertion requires\
    \ logarithmic time (if the hint is not taken).\n        */\n       template <typename...\
    \ _Args>\n     iterator\n     try_emplace(const_iterator __hint, const key_type&\
    \ __k,\n             _Args&&... __args)\n     {\n       iterator __i;\n      \
    \ auto __true_hint = _M_t._M_get_insert_hint_unique_pos(__hint, __k);\n      \
    \ if (__true_hint.second)\n         __i = emplace_hint(iterator(__true_hint.second),\n\
    \                    std::piecewise_construct,\n                    std::forward_as_tuple(__k),\n\
    \                    std::forward_as_tuple(\n                  std::forward<_Args>(__args)...));\n\
    \       else\n         __i = iterator(__true_hint.first);\n       return __i;\n\
    \     }\n \n       // move-capable overload\n       template <typename... _Args>\n\
    \     iterator\n     try_emplace(const_iterator __hint, key_type&& __k, _Args&&...\
    \ __args)\n     {\n       iterator __i;\n       auto __true_hint = _M_t._M_get_insert_hint_unique_pos(__hint,\
    \ __k);\n       if (__true_hint.second)\n         __i = emplace_hint(iterator(__true_hint.second),\n\
    \                    std::piecewise_construct,\n                    std::forward_as_tuple(std::move(__k)),\n\
    \                    std::forward_as_tuple(\n                  std::forward<_Args>(__args)...));\n\
    \       else\n         __i = iterator(__true_hint.first);\n       return __i;\n\
    \     }\n #endif\n \n       /**\n        *  @brief Attempts to insert a std::pair\
    \ into the %map.\n        *  @param __x Pair to be inserted (see std::make_pair\
    \ for easy\n        *\t     creation of pairs).\n        *\n        *  @return\
    \  A pair, of which the first element is an iterator that\n        *         \
    \  points to the possibly inserted pair, and the second is\n        *        \
    \   a bool that is true if the pair was actually inserted.\n        *\n      \
    \  *  This function attempts to insert a (key, value) %pair into the %map.\n \
    \       *  A %map relies on unique keys and thus a %pair is only inserted if its\n\
    \        *  first element (the key) is not already present in the %map.\n    \
    \    *\n        *  Insertion requires logarithmic time.\n        *  @{\n     \
    \   */\n       std::pair<iterator, bool>\n       insert(const value_type& __x)\n\
    \       { return _M_t._M_insert_unique(__x); }\n \n #if __cplusplus >= 201103L\n\
    \       // _GLIBCXX_RESOLVE_LIB_DEFECTS\n       // 2354. Unnecessary copying when\
    \ inserting into maps with braced-init\n       std::pair<iterator, bool>\n   \
    \    insert(value_type&& __x)\n       { return _M_t._M_insert_unique(std::move(__x));\
    \ }\n \n       template<typename _Pair>\n     __enable_if_t<is_constructible<value_type,\
    \ _Pair>::value,\n               pair<iterator, bool>>\n     insert(_Pair&& __x)\n\
    \     {\n #if __cplusplus >= 201703L\n       using _P2 = remove_reference_t<_Pair>;\n\
    \       if constexpr (__is_pair<remove_const_t<_P2>>)\n         if constexpr (is_same_v<allocator_type,\
    \ allocator<value_type>>)\n           if constexpr (__usable_key<typename _P2::first_type>)\n\
    \         {\n           const key_type& __k = __x.first;\n           iterator\
    \ __i = lower_bound(__k);\n           if (__i == end() || key_comp()(__k, (*__i).first))\n\
    \             {\n               __i = emplace_hint(__i, std::forward<_Pair>(__x));\n\
    \               return {__i, true};\n             }\n           return {__i, false};\n\
    \         }\n #endif\n       return _M_t._M_emplace_unique(std::forward<_Pair>(__x));\n\
    \     }\n #endif\n       /// @}\n \n #if __cplusplus >= 201103L\n       /**\n\
    \        *  @brief Attempts to insert a list of std::pairs into the %map.\n  \
    \      *  @param  __list  A std::initializer_list<value_type> of pairs to be\n\
    \        *                  inserted.\n        *\n        *  Complexity similar\
    \ to that of the range constructor.\n        */\n       void\n       insert(std::initializer_list<value_type>\
    \ __list)\n       { insert(__list.begin(), __list.end()); }\n #endif\n \n    \
    \   /**\n        *  @brief Attempts to insert a std::pair into the %map.\n   \
    \     *  @param  __position  An iterator that serves as a hint as to where the\n\
    \        *                    pair should be inserted.\n        *  @param  __x\
    \  Pair to be inserted (see std::make_pair for easy creation\n        *      \
    \         of pairs).\n        *  @return An iterator that points to the element\
    \ with key of\n        *           @a __x (may or may not be the %pair passed\
    \ in).\n        *\n \n        *  This function is not concerned about whether\
    \ the insertion\n        *  took place, and thus does not return a boolean like\
    \ the\n        *  single-argument insert() does.  Note that the first\n      \
    \  *  parameter is only a hint and can potentially improve the\n        *  performance\
    \ of the insertion process.  A bad hint would\n        *  cause no gains in efficiency.\n\
    \        *\n        *  See\n        *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/associative.html#containers.associative.insert_hints\n\
    \        *  for more on @a hinting.\n        *\n        *  Insertion requires\
    \ logarithmic time (if the hint is not taken).\n        *  @{\n        */\n  \
    \     iterator\n #if __cplusplus >= 201103L\n       insert(const_iterator __position,\
    \ const value_type& __x)\n #else\n       insert(iterator __position, const value_type&\
    \ __x)\n #endif\n       { return _M_t._M_insert_unique_(__position, __x); }\n\
    \ \n #if __cplusplus >= 201103L\n       // _GLIBCXX_RESOLVE_LIB_DEFECTS\n    \
    \   // 2354. Unnecessary copying when inserting into maps with braced-init\n \
    \      iterator\n       insert(const_iterator __position, value_type&& __x)\n\
    \       { return _M_t._M_insert_unique_(__position, std::move(__x)); }\n \n  \
    \     template<typename _Pair>\n     __enable_if_t<is_constructible<value_type,\
    \ _Pair>::value, iterator>\n     insert(const_iterator __position, _Pair&& __x)\n\
    \     {\n       return _M_t._M_emplace_hint_unique(__position,\n             \
    \             std::forward<_Pair>(__x));\n     }\n #endif\n       /// @}\n \n\
    \       /**\n        *  @brief Template function that attempts to insert a range\
    \ of elements.\n        *  @param  __first  Iterator pointing to the start of\
    \ the range to be\n        *                   inserted.\n        *  @param  __last\
    \  Iterator pointing to the end of the range.\n        *\n        *  Complexity\
    \ similar to that of the range constructor.\n        */\n       template<typename\
    \ _InputIterator>\n     void\n     insert(_InputIterator __first, _InputIterator\
    \ __last)\n     { _M_t._M_insert_range_unique(__first, __last); }\n \n #if __cplusplus\
    \ > 201402L\n       /**\n        *  @brief Attempts to insert or assign a std::pair\
    \ into the %map.\n        *  @param __k    Key to use for finding a possibly existing\
    \ pair in\n        *                the map.\n        *  @param __obj  Argument\
    \ used to generate the .second for a pair\n        *                instance.\n\
    \        *\n        *  @return  A pair, of which the first element is an iterator\
    \ that\n        *           points to the possibly inserted pair, and the second\
    \ is\n        *           a bool that is true if the pair was actually inserted.\n\
    \        *\n        *  This function attempts to insert a (key, value) %pair into\
    \ the %map.\n        *  A %map relies on unique keys and thus a %pair is only\
    \ inserted if its\n        *  first element (the key) is not already present in\
    \ the %map.\n        *  If the %pair was already in the %map, the .second of the\
    \ %pair\n        *  is assigned from __obj.\n        *\n        *  Insertion requires\
    \ logarithmic time.\n        */\n       template <typename _Obj>\n     pair<iterator,\
    \ bool>\n     insert_or_assign(const key_type& __k, _Obj&& __obj)\n     {\n  \
    \     iterator __i = lower_bound(__k);\n       if (__i == end() || key_comp()(__k,\
    \ (*__i).first))\n         {\n           __i = emplace_hint(__i, std::piecewise_construct,\n\
    \                  std::forward_as_tuple(__k),\n                  std::forward_as_tuple(\n\
    \                    std::forward<_Obj>(__obj)));\n           return {__i, true};\n\
    \         }\n       (*__i).second = std::forward<_Obj>(__obj);\n       return\
    \ {__i, false};\n     }\n \n       // move-capable overload\n       template <typename\
    \ _Obj>\n     pair<iterator, bool>\n     insert_or_assign(key_type&& __k, _Obj&&\
    \ __obj)\n     {\n       iterator __i = lower_bound(__k);\n       if (__i == end()\
    \ || key_comp()(__k, (*__i).first))\n         {\n           __i = emplace_hint(__i,\
    \ std::piecewise_construct,\n                  std::forward_as_tuple(std::move(__k)),\n\
    \                  std::forward_as_tuple(\n                    std::forward<_Obj>(__obj)));\n\
    \           return {__i, true};\n         }\n       (*__i).second = std::forward<_Obj>(__obj);\n\
    \       return {__i, false};\n     }\n \n       /**\n        *  @brief Attempts\
    \ to insert or assign a std::pair into the %map.\n        *  @param  __hint  An\
    \ iterator that serves as a hint as to where the\n        *                  pair\
    \ should be inserted.\n        *  @param __k    Key to use for finding a possibly\
    \ existing pair in\n        *                the map.\n        *  @param __obj\
    \  Argument used to generate the .second for a pair\n        *               \
    \ instance.\n        *\n        *  @return An iterator that points to the element\
    \ with key of\n        *           @a __x (may or may not be the %pair passed\
    \ in).\n        *\n        *  This function attempts to insert a (key, value)\
    \ %pair into the %map.\n        *  A %map relies on unique keys and thus a %pair\
    \ is only inserted if its\n        *  first element (the key) is not already present\
    \ in the %map.\n        *  If the %pair was already in the %map, the .second of\
    \ the %pair\n        *  is assigned from __obj.\n        *\n        *  Insertion\
    \ requires logarithmic time.\n        */\n       template <typename _Obj>\n  \
    \   iterator\n     insert_or_assign(const_iterator __hint,\n              const\
    \ key_type& __k, _Obj&& __obj)\n     {\n       iterator __i;\n       auto __true_hint\
    \ = _M_t._M_get_insert_hint_unique_pos(__hint, __k);\n       if (__true_hint.second)\n\
    \         {\n           return emplace_hint(iterator(__true_hint.second),\n  \
    \                 std::piecewise_construct,\n                   std::forward_as_tuple(__k),\n\
    \                   std::forward_as_tuple(\n                     std::forward<_Obj>(__obj)));\n\
    \         }\n       __i = iterator(__true_hint.first);\n       (*__i).second =\
    \ std::forward<_Obj>(__obj);\n       return __i;\n     }\n \n       // move-capable\
    \ overload\n       template <typename _Obj>\n     iterator\n     insert_or_assign(const_iterator\
    \ __hint, key_type&& __k, _Obj&& __obj)\n     {\n       iterator __i;\n      \
    \ auto __true_hint = _M_t._M_get_insert_hint_unique_pos(__hint, __k);\n      \
    \ if (__true_hint.second)\n         {\n           return emplace_hint(iterator(__true_hint.second),\n\
    \                   std::piecewise_construct,\n                   std::forward_as_tuple(std::move(__k)),\n\
    \                   std::forward_as_tuple(\n                     std::forward<_Obj>(__obj)));\n\
    \         }\n       __i = iterator(__true_hint.first);\n       (*__i).second =\
    \ std::forward<_Obj>(__obj);\n       return __i;\n     }\n #endif\n \n #if __cplusplus\
    \ >= 201103L\n       // _GLIBCXX_RESOLVE_LIB_DEFECTS\n       // DR 130. Associative\
    \ erase should return an iterator.\n       /**\n        *  @brief Erases an element\
    \ from a %map.\n        *  @param  __position  An iterator pointing to the element\
    \ to be erased.\n        *  @return An iterator pointing to the element immediately\
    \ following\n        *          @a position prior to the element being erased.\
    \ If no such\n        *          element exists, end() is returned.\n        *\n\
    \        *  This function erases an element, pointed to by the given\n       \
    \ *  iterator, from a %map.  Note that this function only erases\n        *  the\
    \ element, and that if the element is itself a pointer,\n        *  the pointed-to\
    \ memory is not touched in any way.  Managing\n        *  the pointer is the user's\
    \ responsibility.\n        *\n        *  @{\n        */\n       iterator\n   \
    \    erase(const_iterator __position)\n       { return _M_t.erase(__position);\
    \ }\n \n       // LWG 2059\n       _GLIBCXX_ABI_TAG_CXX11\n       iterator\n \
    \      erase(iterator __position)\n       { return _M_t.erase(__position); }\n\
    \       /// @}\n #else\n       /**\n        *  @brief Erases an element from a\
    \ %map.\n        *  @param  __position  An iterator pointing to the element to\
    \ be erased.\n        *\n        *  This function erases an element, pointed to\
    \ by the given\n        *  iterator, from a %map.  Note that this function only\
    \ erases\n        *  the element, and that if the element is itself a pointer,\n\
    \        *  the pointed-to memory is not touched in any way.  Managing\n     \
    \   *  the pointer is the user's responsibility.\n        */\n       void\n  \
    \     erase(iterator __position)\n       { _M_t.erase(__position); }\n #endif\n\
    \ \n       /**\n        *  @brief Erases elements according to the provided key.\n\
    \        *  @param  __x  Key of element to be erased.\n        *  @return  The\
    \ number of elements erased.\n        *\n        *  This function erases all the\
    \ elements located by the given key from\n        *  a %map.\n        *  Note\
    \ that this function only erases the element, and that if\n        *  the element\
    \ is itself a pointer, the pointed-to memory is not touched\n        *  in any\
    \ way.  Managing the pointer is the user's responsibility.\n        */\n     \
    \  size_type\n       erase(const key_type& __x)\n       { return _M_t.erase(__x);\
    \ }\n \n #if __cplusplus >= 201103L\n       // _GLIBCXX_RESOLVE_LIB_DEFECTS\n\
    \       // DR 130. Associative erase should return an iterator.\n       /**\n\
    \        *  @brief Erases a [first,last) range of elements from a %map.\n    \
    \    *  @param  __first  Iterator pointing to the start of the range to be\n \
    \       *                   erased.\n        *  @param __last Iterator pointing\
    \ to the end of the range to\n        *                be erased.\n        * \
    \ @return The iterator @a __last.\n        *\n        *  This function erases\
    \ a sequence of elements from a %map.\n        *  Note that this function only\
    \ erases the element, and that if\n        *  the element is itself a pointer,\
    \ the pointed-to memory is not touched\n        *  in any way.  Managing the pointer\
    \ is the user's responsibility.\n        */\n       iterator\n       erase(const_iterator\
    \ __first, const_iterator __last)\n       { return _M_t.erase(__first, __last);\
    \ }\n #else\n       /**\n        *  @brief Erases a [__first,__last) range of\
    \ elements from a %map.\n        *  @param  __first  Iterator pointing to the\
    \ start of the range to be\n        *                   erased.\n        *  @param\
    \ __last Iterator pointing to the end of the range to\n        *             \
    \   be erased.\n        *\n        *  This function erases a sequence of elements\
    \ from a %map.\n        *  Note that this function only erases the element, and\
    \ that if\n        *  the element is itself a pointer, the pointed-to memory is\
    \ not touched\n        *  in any way.  Managing the pointer is the user's responsibility.\n\
    \        */\n       void\n       erase(iterator __first, iterator __last)\n  \
    \     { _M_t.erase(__first, __last); }\n #endif\n \n       /**\n        *  @brief\
    \  Swaps data with another %map.\n        *  @param  __x  A %map of the same element\
    \ and allocator types.\n        *\n        *  This exchanges the elements between\
    \ two maps in constant\n        *  time.  (It is only swapping a pointer, an integer,\
    \ and an\n        *  instance of the @c Compare type (which itself is often\n\
    \        *  stateless and empty), so it should be quite fast.)  Note\n       \
    \ *  that the global std::swap() function is specialized such\n        *  that\
    \ std::swap(m1,m2) will feed to this function.\n        *\n        *  Whether\
    \ the allocators are swapped depends on the allocator traits.\n        */\n  \
    \     void\n       swap(map& __x)\n       _GLIBCXX_NOEXCEPT_IF(__is_nothrow_swappable<_Compare>::value)\n\
    \       { _M_t.swap(__x._M_t); }\n \n       /**\n        *  Erases all elements\
    \ in a %map.  Note that this function only\n        *  erases the elements, and\
    \ that if the elements themselves are\n        *  pointers, the pointed-to memory\
    \ is not touched in any way.\n        *  Managing the pointer is the user's responsibility.\n\
    \        */\n       void\n       clear() _GLIBCXX_NOEXCEPT\n       { _M_t.clear();\
    \ }\n \n       // observers\n       /**\n        *  Returns the key comparison\
    \ object out of which the %map was\n        *  constructed.\n        */\n    \
    \   key_compare\n       key_comp() const\n       { return _M_t.key_comp(); }\n\
    \ \n       /**\n        *  Returns a value comparison object, built from the key\
    \ comparison\n        *  object out of which the %map was constructed.\n     \
    \   */\n       value_compare\n       value_comp() const\n       { return value_compare(_M_t.key_comp());\
    \ }\n \n       // [23.3.1.3] map operations\n \n       ///@{\n       /**\n   \
    \     *  @brief Tries to locate an element in a %map.\n        *  @param  __x\
    \  Key of (key, value) %pair to be located.\n        *  @return  Iterator pointing\
    \ to sought-after element, or end() if not\n        *           found.\n     \
    \   *\n        *  This function takes a key and tries to locate the element with\
    \ which\n        *  the key matches.  If successful the function returns an iterator\n\
    \        *  pointing to the sought after %pair.  If unsuccessful it returns the\n\
    \        *  past-the-end ( @c end() ) iterator.\n        */\n \n       iterator\n\
    \       find(const key_type& __x)\n       { return _M_t.find(__x); }\n \n #if\
    \ __cplusplus > 201103L\n       template<typename _Kt>\n     auto\n     find(const\
    \ _Kt& __x) -> decltype(_M_t._M_find_tr(__x))\n     { return _M_t._M_find_tr(__x);\
    \ }\n #endif\n       ///@}\n \n       ///@{\n       /**\n        *  @brief Tries\
    \ to locate an element in a %map.\n        *  @param  __x  Key of (key, value)\
    \ %pair to be located.\n        *  @return  Read-only (constant) iterator pointing\
    \ to sought-after\n        *           element, or end() if not found.\n     \
    \   *\n        *  This function takes a key and tries to locate the element with\
    \ which\n        *  the key matches.  If successful the function returns a constant\n\
    \        *  iterator pointing to the sought after %pair. If unsuccessful it\n\
    \        *  returns the past-the-end ( @c end() ) iterator.\n        */\n \n \
    \      const_iterator\n       find(const key_type& __x) const\n       { return\
    \ _M_t.find(__x); }\n \n #if __cplusplus > 201103L\n       template<typename _Kt>\n\
    \     auto\n     find(const _Kt& __x) const -> decltype(_M_t._M_find_tr(__x))\n\
    \     { return _M_t._M_find_tr(__x); }\n #endif\n       ///@}\n \n       ///@{\n\
    \       /**\n        *  @brief  Finds the number of elements with given key.\n\
    \        *  @param  __x  Key of (key, value) pairs to be located.\n        * \
    \ @return  Number of elements with specified key.\n        *\n        *  This\
    \ function only makes sense for multimaps; for map the result will\n        *\
    \  either be 0 (not present) or 1 (present).\n        */\n       size_type\n \
    \      count(const key_type& __x) const\n       { return _M_t.find(__x) == _M_t.end()\
    \ ? 0 : 1; }\n \n #if __cplusplus > 201103L\n       template<typename _Kt>\n \
    \    auto\n     count(const _Kt& __x) const -> decltype(_M_t._M_count_tr(__x))\n\
    \     { return _M_t._M_count_tr(__x); }\n #endif\n       ///@}\n \n #if __cplusplus\
    \ > 201703L\n       ///@{\n       /**\n        *  @brief  Finds whether an element\
    \ with the given key exists.\n        *  @param  __x  Key of (key, value) pairs\
    \ to be located.\n        *  @return  True if there is an element with the specified\
    \ key.\n        */\n       bool\n       contains(const key_type& __x) const\n\
    \       { return _M_t.find(__x) != _M_t.end(); }\n \n       template<typename\
    \ _Kt>\n     auto\n     contains(const _Kt& __x) const\n     -> decltype(_M_t._M_find_tr(__x),\
    \ void(), true)\n     { return _M_t._M_find_tr(__x) != _M_t.end(); }\n       ///@}\n\
    \ #endif\n \n       ///@{\n       /**\n        *  @brief Finds the beginning of\
    \ a subsequence matching given key.\n        *  @param  __x  Key of (key, value)\
    \ pair to be located.\n        *  @return  Iterator pointing to first element\
    \ equal to or greater\n        *           than key, or end().\n        *\n  \
    \      *  This function returns the first element of a subsequence of elements\n\
    \        *  that matches the given key.  If unsuccessful it returns an iterator\n\
    \        *  pointing to the first element that has a greater value than given\
    \ key\n        *  or end() if no such element exists.\n        */\n       iterator\n\
    \       lower_bound(const key_type& __x)\n       { return _M_t.lower_bound(__x);\
    \ }\n \n #if __cplusplus > 201103L\n       template<typename _Kt>\n     auto\n\
    \     lower_bound(const _Kt& __x)\n     -> decltype(iterator(_M_t._M_lower_bound_tr(__x)))\n\
    \     { return iterator(_M_t._M_lower_bound_tr(__x)); }\n #endif\n       ///@}\n\
    \ \n       ///@{\n       /**\n        *  @brief Finds the beginning of a subsequence\
    \ matching given key.\n        *  @param  __x  Key of (key, value) pair to be\
    \ located.\n        *  @return  Read-only (constant) iterator pointing to first\
    \ element\n        *           equal to or greater than key, or end().\n     \
    \   *\n        *  This function returns the first element of a subsequence of\
    \ elements\n        *  that matches the given key.  If unsuccessful it returns\
    \ an iterator\n        *  pointing to the first element that has a greater value\
    \ than given key\n        *  or end() if no such element exists.\n        */\n\
    \       const_iterator\n       lower_bound(const key_type& __x) const\n      \
    \ { return _M_t.lower_bound(__x); }\n \n #if __cplusplus > 201103L\n       template<typename\
    \ _Kt>\n     auto\n     lower_bound(const _Kt& __x) const\n     -> decltype(const_iterator(_M_t._M_lower_bound_tr(__x)))\n\
    \     { return const_iterator(_M_t._M_lower_bound_tr(__x)); }\n #endif\n     \
    \  ///@}\n \n       ///@{\n       /**\n        *  @brief Finds the end of a subsequence\
    \ matching given key.\n        *  @param  __x  Key of (key, value) pair to be\
    \ located.\n        *  @return Iterator pointing to the first element\n      \
    \  *          greater than key, or end().\n        */\n       iterator\n     \
    \  upper_bound(const key_type& __x)\n       { return _M_t.upper_bound(__x); }\n\
    \ \n #if __cplusplus > 201103L\n       template<typename _Kt>\n     auto\n   \
    \  upper_bound(const _Kt& __x)\n     -> decltype(iterator(_M_t._M_upper_bound_tr(__x)))\n\
    \     { return iterator(_M_t._M_upper_bound_tr(__x)); }\n #endif\n       ///@}\n\
    \ \n       ///@{\n       /**\n        *  @brief Finds the end of a subsequence\
    \ matching given key.\n        *  @param  __x  Key of (key, value) pair to be\
    \ located.\n        *  @return  Read-only (constant) iterator pointing to first\
    \ iterator\n        *           greater than key, or end().\n        */\n    \
    \   const_iterator\n       upper_bound(const key_type& __x) const\n       { return\
    \ _M_t.upper_bound(__x); }\n \n #if __cplusplus > 201103L\n       template<typename\
    \ _Kt>\n     auto\n     upper_bound(const _Kt& __x) const\n     -> decltype(const_iterator(_M_t._M_upper_bound_tr(__x)))\n\
    \     { return const_iterator(_M_t._M_upper_bound_tr(__x)); }\n #endif\n     \
    \  ///@}\n \n       ///@{\n       /**\n        *  @brief Finds a subsequence matching\
    \ given key.\n        *  @param  __x  Key of (key, value) pairs to be located.\n\
    \        *  @return  Pair of iterators that possibly points to the subsequence\n\
    \        *           matching given key.\n        *\n        *  This function\
    \ is equivalent to\n        *  @code\n        *    std::make_pair(c.lower_bound(val),\n\
    \        *                   c.upper_bound(val))\n        *  @endcode\n      \
    \  *  (but is faster than making the calls separately).\n        *\n        *\
    \  This function probably only makes sense for multimaps.\n        */\n      \
    \ std::pair<iterator, iterator>\n       equal_range(const key_type& __x)\n   \
    \    { return _M_t.equal_range(__x); }\n \n #if __cplusplus > 201103L\n      \
    \ template<typename _Kt>\n     auto\n     equal_range(const _Kt& __x)\n     ->\
    \ decltype(pair<iterator, iterator>(_M_t._M_equal_range_tr(__x)))\n     { return\
    \ pair<iterator, iterator>(_M_t._M_equal_range_tr(__x)); }\n #endif\n       ///@}\n\
    \ \n       ///@{\n       /**\n        *  @brief Finds a subsequence matching given\
    \ key.\n        *  @param  __x  Key of (key, value) pairs to be located.\n   \
    \     *  @return  Pair of read-only (constant) iterators that possibly points\n\
    \        *           to the subsequence matching given key.\n        *\n     \
    \   *  This function is equivalent to\n        *  @code\n        *    std::make_pair(c.lower_bound(val),\n\
    \        *                   c.upper_bound(val))\n        *  @endcode\n      \
    \  *  (but is faster than making the calls separately).\n        *\n        *\
    \  This function probably only makes sense for multimaps.\n        */\n      \
    \ std::pair<const_iterator, const_iterator>\n       equal_range(const key_type&\
    \ __x) const\n       { return _M_t.equal_range(__x); }\n \n #if __cplusplus >\
    \ 201103L\n       template<typename _Kt>\n     auto\n     equal_range(const _Kt&\
    \ __x) const\n     -> decltype(pair<const_iterator, const_iterator>(\n       \
    \    _M_t._M_equal_range_tr(__x)))\n     {\n       return pair<const_iterator,\
    \ const_iterator>(\n           _M_t._M_equal_range_tr(__x));\n     }\n #endif\n\
    \       ///@}\n \n       template<typename _K1, typename _T1, typename _C1, typename\
    \ _A1>\n     friend bool\n     operator==(const map<_K1, _T1, _C1, _A1>&,\n  \
    \          const map<_K1, _T1, _C1, _A1>&);\n \n #if __cpp_lib_three_way_comparison\n\
    \       template<typename _K1, typename _T1, typename _C1, typename _A1>\n   \
    \  friend __detail::__synth3way_t<pair<const _K1, _T1>>\n     operator<=>(const\
    \ map<_K1, _T1, _C1, _A1>&,\n             const map<_K1, _T1, _C1, _A1>&);\n #else\n\
    \       template<typename _K1, typename _T1, typename _C1, typename _A1>\n   \
    \  friend bool\n     operator<(const map<_K1, _T1, _C1, _A1>&,\n           const\
    \ map<_K1, _T1, _C1, _A1>&);\n #endif\n     };\n \n \n #if __cpp_deduction_guides\
    \ >= 201606\n \n   template<typename _InputIterator,\n        typename _Compare\
    \ = less<__iter_key_t<_InputIterator>>,\n        typename _Allocator = allocator<__iter_to_alloc_t<_InputIterator>>,\n\
    \        typename = _RequireInputIter<_InputIterator>,\n        typename = _RequireNotAllocator<_Compare>,\n\
    \        typename = _RequireAllocator<_Allocator>>\n     map(_InputIterator, _InputIterator,\n\
    \     _Compare = _Compare(), _Allocator = _Allocator())\n     -> map<__iter_key_t<_InputIterator>,\
    \ __iter_val_t<_InputIterator>,\n        _Compare, _Allocator>;\n \n   template<typename\
    \ _Key, typename _Tp, typename _Compare = less<_Key>,\n        typename _Allocator\
    \ = allocator<pair<const _Key, _Tp>>,\n        typename = _RequireNotAllocator<_Compare>,\n\
    \        typename = _RequireAllocator<_Allocator>>\n     map(initializer_list<pair<_Key,\
    \ _Tp>>,\n     _Compare = _Compare(), _Allocator = _Allocator())\n     -> map<_Key,\
    \ _Tp, _Compare, _Allocator>;\n \n   template <typename _InputIterator, typename\
    \ _Allocator,\n         typename = _RequireInputIter<_InputIterator>,\n      \
    \   typename = _RequireAllocator<_Allocator>>\n     map(_InputIterator, _InputIterator,\
    \ _Allocator)\n     -> map<__iter_key_t<_InputIterator>, __iter_val_t<_InputIterator>,\n\
    \        less<__iter_key_t<_InputIterator>>, _Allocator>;\n \n   template<typename\
    \ _Key, typename _Tp, typename _Allocator,\n        typename = _RequireAllocator<_Allocator>>\n\
    \     map(initializer_list<pair<_Key, _Tp>>, _Allocator)\n     -> map<_Key, _Tp,\
    \ less<_Key>, _Allocator>;\n \n #endif // deduction guides\n \n   /**\n    * \
    \ @brief  Map equality comparison.\n    *  @param  __x  A %map.\n    *  @param\
    \  __y  A %map of the same type as @a x.\n    *  @return  True iff the size and\
    \ elements of the maps are equal.\n    *\n    *  This is an equivalence relation.\
    \  It is linear in the size of the\n    *  maps.  Maps are considered equivalent\
    \ if their sizes are equal,\n    *  and if corresponding elements compare equal.\n\
    \   */\n   template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>\n\
    \     inline bool\n     operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,\n\
    \            const map<_Key, _Tp, _Compare, _Alloc>& __y)\n     { return __x._M_t\
    \ == __y._M_t; }\n \n #if __cpp_lib_three_way_comparison\n   /**\n    *  @brief\
    \  Map ordering relation.\n    *  @param  __x  A `map`.\n    *  @param  __y  A\
    \ `map` of the same type as `x`.\n    *  @return  A value indicating whether `__x`\
    \ is less than, equal to,\n    *           greater than, or incomparable with\
    \ `__y`.\n    *\n    *  This is a total ordering relation.  It is linear in the\
    \ size of the\n    *  maps.  The elements must be comparable with @c <.\n    *\n\
    \    *  See `std::lexicographical_compare_three_way()` for how the determination\n\
    \    *  is made. This operator is used to synthesize relational operators like\n\
    \    *  `<` and `>=` etc.\n   */\n   template<typename _Key, typename _Tp, typename\
    \ _Compare, typename _Alloc>\n     inline __detail::__synth3way_t<pair<const _Key,\
    \ _Tp>>\n     operator<=>(const map<_Key, _Tp, _Compare, _Alloc>& __x,\n     \
    \    const map<_Key, _Tp, _Compare, _Alloc>& __y)\n     { return __x._M_t <=>\
    \ __y._M_t; }\n #else\n   /**\n    *  @brief  Map ordering relation.\n    *  @param\
    \  __x  A %map.\n    *  @param  __y  A %map of the same type as @a x.\n    * \
    \ @return  True iff @a x is lexicographically less than @a y.\n    *\n    *  This\
    \ is a total ordering relation.  It is linear in the size of the\n    *  maps.\
    \  The elements must be comparable with @c <.\n    *\n    *  See std::lexicographical_compare()\
    \ for how the determination is made.\n   */\n   template<typename _Key, typename\
    \ _Tp, typename _Compare, typename _Alloc>\n     inline bool\n     operator<(const\
    \ map<_Key, _Tp, _Compare, _Alloc>& __x,\n           const map<_Key, _Tp, _Compare,\
    \ _Alloc>& __y)\n     { return __x._M_t < __y._M_t; }\n \n   /// Based on operator==\n\
    \   template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>\n\
    \     inline bool\n     operator!=(const map<_Key, _Tp, _Compare, _Alloc>& __x,\n\
    \            const map<_Key, _Tp, _Compare, _Alloc>& __y)\n     { return !(__x\
    \ == __y); }\n \n   /// Based on operator<\n   template<typename _Key, typename\
    \ _Tp, typename _Compare, typename _Alloc>\n     inline bool\n     operator>(const\
    \ map<_Key, _Tp, _Compare, _Alloc>& __x,\n           const map<_Key, _Tp, _Compare,\
    \ _Alloc>& __y)\n     { return __y < __x; }\n \n   /// Based on operator<\n  \
    \ template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>\n\
    \     inline bool\n     operator<=(const map<_Key, _Tp, _Compare, _Alloc>& __x,\n\
    \            const map<_Key, _Tp, _Compare, _Alloc>& __y)\n     { return !(__y\
    \ < __x); }\n \n   /// Based on operator<\n   template<typename _Key, typename\
    \ _Tp, typename _Compare, typename _Alloc>\n     inline bool\n     operator>=(const\
    \ map<_Key, _Tp, _Compare, _Alloc>& __x,\n            const map<_Key, _Tp, _Compare,\
    \ _Alloc>& __y)\n     { return !(__x < __y); }\n #endif // three-way comparison\n\
    \ \n   /// See std::map::swap().\n   template<typename _Key, typename _Tp, typename\
    \ _Compare, typename _Alloc>\n     inline void\n     swap(map<_Key, _Tp, _Compare,\
    \ _Alloc>& __x,\n      map<_Key, _Tp, _Compare, _Alloc>& __y)\n     _GLIBCXX_NOEXCEPT_IF(noexcept(__x.swap(__y)))\n\
    \     { __x.swap(__y); }\n \n _GLIBCXX_END_NAMESPACE_CONTAINER\n \n #if __cplusplus\
    \ > 201402L\n   // Allow std::map access to internals of compatible maps.\n  \
    \ \n #endif // C++17\n \n _GLIBCXX_END_NAMESPACE_VERSION\n } // namespace std\n\
    \ \n #endif /* _STL_MAP_H */\n \n"
  code: "#include<ext/pb_ds/assoc_container.hpp>\n#include<ext/pb_ds/tree_policy.hpp>\n\
    // Map implementation -*- C++ -*-\n\n// Copyright (C) 2001-2023 Free Software\
    \ Foundation, Inc.\n//\n// This file is part of the GNU ISO C++ Library.  This\
    \ library is free\n// software; you can redistribute it and/or modify it under\
    \ the\n// terms of the GNU General Public License as published by the\n// Free\
    \ Software Foundation; either version 3, or (at your option)\n// any later version.\n\
    \n// This library is distributed in the hope that it will be useful,\n// but WITHOUT\
    \ ANY WARRANTY; without even the implied warranty of\n// MERCHANTABILITY or FITNESS\
    \ FOR A PARTICULAR PURPOSE.  See the\n// GNU General Public License for more details.\n\
    \n// Under Section 7 of GPL version 3, you are granted additional\n// permissions\
    \ described in the GCC Runtime Library Exception, version\n// 3.1, as published\
    \ by the Free Software Foundation.\n\n// You should have received a copy of the\
    \ GNU General Public License and\n// a copy of the GCC Runtime Library Exception\
    \ along with this program;\n// see the files COPYING3 and COPYING.RUNTIME respectively.\
    \  If not, see\n// <http://www.gnu.org/licenses/>.\n\n/*\n *\n * Copyright (c)\
    \ 1994\n * Hewlett-Packard Company\n *\n * Permission to use, copy, modify, distribute\
    \ and sell this software\n * and its documentation for any purpose is hereby granted\
    \ without fee,\n * provided that the above copyright notice appear in all copies\
    \ and\n * that both that copyright notice and this permission notice appear\n\
    \ * in supporting documentation.  Hewlett-Packard Company makes no\n * representations\
    \ about the suitability of this software for any\n * purpose.  It is provided\
    \ \"as is\" without express or implied warranty.\n *\n *\n * Copyright (c) 1996,1997\n\
    \ * Silicon Graphics Computer Systems, Inc.\n *\n * Permission to use, copy, modify,\
    \ distribute and sell this software\n * and its documentation for any purpose\
    \ is hereby granted without fee,\n * provided that the above copyright notice\
    \ appear in all copies and\n * that both that copyright notice and this permission\
    \ notice appear\n * in supporting documentation.  Silicon Graphics makes no\n\
    \ * representations about the suitability of this software for any\n * purpose.\
    \  It is provided \"as is\" without express or implied warranty.\n */\n\n/** @file\
    \ bits/stl_map.h\n *  This is an internal header file, included by other library\
    \ headers.\n *  Do not attempt to use it directly. @headername{map}\n */\n\n #ifndef\
    \ _STL_MAP_H\n #define _STL_MAP_H 1\n \n #include <bits/functexcept.h>\n #include\
    \ <bits/concept_check.h>\n #if __cplusplus >= 201103L\n #include <initializer_list>\n\
    \ #include <tuple>\n #endif\n \n namespace std _GLIBCXX_VISIBILITY(default)\n\
    \ {\n _GLIBCXX_BEGIN_NAMESPACE_VERSION\n _GLIBCXX_BEGIN_NAMESPACE_CONTAINER\n\
    \ \n   template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>\n\
    \     class multimap;\n \n   /**\n    *  @brief A standard container made up of\
    \ (key,value) pairs, which can be\n    *  retrieved based on a key, in logarithmic\
    \ time.\n    *\n    *  @ingroup associative_containers\n    *  @headerfile map\n\
    \    *  @since C++98\n    *\n    *  @tparam _Key  Type of key objects.\n    *\
    \  @tparam  _Tp  Type of mapped objects.\n    *  @tparam _Compare  Comparison\
    \ function object type, defaults to less<_Key>.\n    *  @tparam _Alloc  Allocator\
    \ type, defaults to\n    *                  allocator<pair<const _Key, _Tp>.\n\
    \    *\n    *  Meets the requirements of a <a href=\"tables.html#65\">container</a>,\
    \ a\n    *  <a href=\"tables.html#66\">reversible container</a>, and an\n    *\
    \  <a href=\"tables.html#69\">associative container</a> (using unique keys).\n\
    \    *  For a @c map<Key,T> the key_type is Key, the mapped_type is T, and the\n\
    \    *  value_type is std::pair<const Key,T>.\n    *\n    *  Maps support bidirectional\
    \ iterators.\n    *\n    *  The private tree data is declared exactly the same\
    \ way for map and\n    *  multimap; the distinction is made entirely in how the\
    \ tree functions are\n    *  called (*_unique versus *_equal, same as the standard).\n\
    \   */\n   template <typename _Key, typename _Tp, typename _Compare = std::less<_Key>,\n\
    \         typename _Alloc = std::allocator<std::pair<const _Key, _Tp> > >\n  \
    \   class map\n     {\n     public:\n       typedef _Key\t\t\t\t\tkey_type;\n\
    \       typedef _Tp\t\t\t\t\tmapped_type;\n       typedef std::pair<const _Key,\
    \ _Tp>\t\tvalue_type;\n       typedef _Compare\t\t\t\t\tkey_compare;\n       typedef\
    \ _Alloc\t\t\t\t\tallocator_type;\n \n     private:\n #ifdef _GLIBCXX_CONCEPT_CHECKS\n\
    \       // concept requirements\n       typedef typename _Alloc::value_type\t\t\
    _Alloc_value_type;\n # if __cplusplus < 201103L\n       __glibcxx_class_requires(_Tp,\
    \ _SGIAssignableConcept)\n # endif\n       __glibcxx_class_requires4(_Compare,\
    \ bool, _Key, _Key,\n                 _BinaryFunctionConcept)\n       __glibcxx_class_requires2(value_type,\
    \ _Alloc_value_type, _SameTypeConcept)\n #endif\n \n #if __cplusplus >= 201103L\n\
    \ #if __cplusplus > 201703L || defined __STRICT_ANSI__\n       static_assert(is_same<typename\
    \ _Alloc::value_type, value_type>::value,\n       \"std::map must have the same\
    \ value_type as its allocator\");\n #endif\n #endif\n \n     public:\n #pragma\
    \ GCC diagnostic push\n #pragma GCC diagnostic ignored \"-Wdeprecated-declarations\"\
    \n       class value_compare\n       : public std::binary_function<value_type,\
    \ value_type, bool>\n       {\n     friend class map<_Key, _Tp, _Compare, _Alloc>;\n\
    \       protected:\n     _Compare comp;\n \n     value_compare(_Compare __c)\n\
    \     : comp(__c) { }\n \n       public:\n     bool operator()(const value_type&\
    \ __x, const value_type& __y) const\n     { return comp(__x.first, __y.first);\
    \ }\n       };\n #pragma GCC diagnostic pop\n \n     private:\n       /// This\
    \ turns a red-black tree into a [multi]map.\n       typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template\n\
    \     rebind<value_type>::other _Pair_alloc_type;\n \n       typedef _Rb_tree<key_type,\
    \ value_type, _Select1st<value_type>,\n                key_compare, _Pair_alloc_type>\
    \ _Rep_type;\n \n       /// The actual tree structure.\n       _Rep_type _M_t;\n\
    \ \n       typedef __gnu_cxx::__alloc_traits<_Pair_alloc_type> _Alloc_traits;\n\
    \ \n #if __cplusplus >= 201703L\n       template<typename _Up, typename _Vp =\
    \ remove_reference_t<_Up>>\n     static constexpr bool __usable_key\n       =\
    \ __or_v<is_same<const _Vp, const _Key>,\n            __and_<is_scalar<_Vp>, is_scalar<_Key>>>;\n\
    \ #endif\n \n     public:\n       // many of these are specified differently in\
    \ ISO, but the following are\n       // \"functionally equivalent\"\n       typedef\
    \ typename _Alloc_traits::pointer\t\t pointer;\n       typedef typename _Alloc_traits::const_pointer\t\
    \ const_pointer;\n       typedef typename _Alloc_traits::reference\t\t reference;\n\
    \       typedef typename _Alloc_traits::const_reference\t const_reference;\n \
    \      typedef typename _Rep_type::iterator\t\t iterator;\n       typedef typename\
    \ _Rep_type::const_iterator\t const_iterator;\n       typedef typename _Rep_type::size_type\t\
    \t size_type;\n       typedef typename _Rep_type::difference_type\t difference_type;\n\
    \       typedef typename _Rep_type::reverse_iterator\t reverse_iterator;\n   \
    \    typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;\n\
    \ \n #if __cplusplus > 201402L\n       using node_type = typename _Rep_type::node_type;\n\
    \       using insert_return_type = typename _Rep_type::insert_return_type;\n #endif\n\
    \ \n       // [23.3.1.1] construct/copy/destroy\n       // (get_allocator() is\
    \ also listed in this section)\n \n       /**\n        *  @brief  Default constructor\
    \ creates no elements.\n        */\n #if __cplusplus < 201103L\n       map() :\
    \ _M_t() { }\n #else\n       map() = default;\n #endif\n \n       /**\n      \
    \  *  @brief  Creates a %map with no elements.\n        *  @param  __comp  A comparison\
    \ object.\n        *  @param  __a  An allocator object.\n        */\n       explicit\n\
    \       map(const _Compare& __comp,\n       const allocator_type& __a = allocator_type())\n\
    \       : _M_t(__comp, _Pair_alloc_type(__a)) { }\n \n       /**\n        *  @brief\
    \  %Map copy constructor.\n        *\n        *  Whether the allocator is copied\
    \ depends on the allocator traits.\n        */\n #if __cplusplus < 201103L\n \
    \      map(const map& __x)\n       : _M_t(__x._M_t) { }\n #else\n       map(const\
    \ map&) = default;\n \n       /**\n        *  @brief  %Map move constructor.\n\
    \        *\n        *  The newly-created %map contains the exact contents of the\
    \ moved\n        *  instance. The moved instance is a valid, but unspecified,\
    \ %map.\n        */\n       map(map&&) = default;\n \n       /**\n        *  @brief\
    \  Builds a %map from an initializer_list.\n        *  @param  __l  An initializer_list.\n\
    \        *  @param  __comp  A comparison object.\n        *  @param  __a  An allocator\
    \ object.\n        *\n        *  Create a %map consisting of copies of the elements\
    \ in the\n        *  initializer_list @a __l.\n        *  This is linear in N\
    \ if the range is already sorted, and NlogN\n        *  otherwise (where N is\
    \ @a __l.size()).\n        */\n       map(initializer_list<value_type> __l,\n\
    \       const _Compare& __comp = _Compare(),\n       const allocator_type& __a\
    \ = allocator_type())\n       : _M_t(__comp, _Pair_alloc_type(__a))\n       {\
    \ _M_t._M_insert_range_unique(__l.begin(), __l.end()); }\n \n       /// Allocator-extended\
    \ default constructor.\n       explicit\n       map(const allocator_type& __a)\n\
    \       : _M_t(_Pair_alloc_type(__a)) { }\n \n       /// Allocator-extended copy\
    \ constructor.\n       map(const map& __m, const __type_identity_t<allocator_type>&\
    \ __a)\n       : _M_t(__m._M_t, _Pair_alloc_type(__a)) { }\n \n       /// Allocator-extended\
    \ move constructor.\n       map(map&& __m, const __type_identity_t<allocator_type>&\
    \ __a)\n       noexcept(is_nothrow_copy_constructible<_Compare>::value\n     \
    \       && _Alloc_traits::_S_always_equal())\n       : _M_t(std::move(__m._M_t),\
    \ _Pair_alloc_type(__a)) { }\n \n       /// Allocator-extended initialier-list\
    \ constructor.\n       map(initializer_list<value_type> __l, const allocator_type&\
    \ __a)\n       : _M_t(_Pair_alloc_type(__a))\n       { _M_t._M_insert_range_unique(__l.begin(),\
    \ __l.end()); }\n \n       /// Allocator-extended range constructor.\n       template<typename\
    \ _InputIterator>\n     map(_InputIterator __first, _InputIterator __last,\n \
    \        const allocator_type& __a)\n     : _M_t(_Pair_alloc_type(__a))\n    \
    \ { _M_t._M_insert_range_unique(__first, __last); }\n #endif\n \n       /**\n\
    \        *  @brief  Builds a %map from a range.\n        *  @param  __first  An\
    \ input iterator.\n        *  @param  __last  An input iterator.\n        *\n\
    \        *  Create a %map consisting of copies of the elements from\n        *\
    \  [__first,__last).  This is linear in N if the range is\n        *  already\
    \ sorted, and NlogN otherwise (where N is\n        *  distance(__first,__last)).\n\
    \        */\n       template<typename _InputIterator>\n     map(_InputIterator\
    \ __first, _InputIterator __last)\n     : _M_t()\n     { _M_t._M_insert_range_unique(__first,\
    \ __last); }\n \n       /**\n        *  @brief  Builds a %map from a range.\n\
    \        *  @param  __first  An input iterator.\n        *  @param  __last  An\
    \ input iterator.\n        *  @param  __comp  A comparison functor.\n        *\
    \  @param  __a  An allocator object.\n        *\n        *  Create a %map consisting\
    \ of copies of the elements from\n        *  [__first,__last).  This is linear\
    \ in N if the range is\n        *  already sorted, and NlogN otherwise (where\
    \ N is\n        *  distance(__first,__last)).\n        */\n       template<typename\
    \ _InputIterator>\n     map(_InputIterator __first, _InputIterator __last,\n \
    \        const _Compare& __comp,\n         const allocator_type& __a = allocator_type())\n\
    \     : _M_t(__comp, _Pair_alloc_type(__a))\n     { _M_t._M_insert_range_unique(__first,\
    \ __last); }\n \n #if __cplusplus >= 201103L\n       /**\n        *  The dtor\
    \ only erases the elements, and note that if the elements\n        *  themselves\
    \ are pointers, the pointed-to memory is not touched in any\n        *  way. \
    \ Managing the pointer is the user's responsibility.\n        */\n       ~map()\
    \ = default;\n #endif\n \n       /**\n        *  @brief  %Map assignment operator.\n\
    \        *\n        *  Whether the allocator is copied depends on the allocator\
    \ traits.\n        */\n #if __cplusplus < 201103L\n       map&\n       operator=(const\
    \ map& __x)\n       {\n     _M_t = __x._M_t;\n     return *this;\n       }\n #else\n\
    \       map&\n       operator=(const map&) = default;\n \n       /// Move assignment\
    \ operator.\n       map&\n       operator=(map&&) = default;\n \n       /**\n\
    \        *  @brief  %Map list assignment operator.\n        *  @param  __l  An\
    \ initializer_list.\n        *\n        *  This function fills a %map with copies\
    \ of the elements in the\n        *  initializer list @a __l.\n        *\n   \
    \     *  Note that the assignment completely changes the %map and\n        * \
    \ that the resulting %map's size is the same as the number\n        *  of elements\
    \ assigned.\n        */\n       map&\n       operator=(initializer_list<value_type>\
    \ __l)\n       {\n     _M_t._M_assign_unique(__l.begin(), __l.end());\n     return\
    \ *this;\n       }\n #endif\n \n       /// Get a copy of the memory allocation\
    \ object.\n       allocator_type\n       get_allocator() const _GLIBCXX_NOEXCEPT\n\
    \       { return allocator_type(_M_t.get_allocator()); }\n \n       // iterators\n\
    \       /**\n        *  Returns a read/write iterator that points to the first\
    \ pair in the\n        *  %map.\n        *  Iteration is done in ascending order\
    \ according to the keys.\n        */\n       iterator\n       begin() _GLIBCXX_NOEXCEPT\n\
    \       { return _M_t.begin(); }\n \n       /**\n        *  Returns a read-only\
    \ (constant) iterator that points to the first pair\n        *  in the %map. \
    \ Iteration is done in ascending order according to the\n        *  keys.\n  \
    \      */\n       const_iterator\n       begin() const _GLIBCXX_NOEXCEPT\n   \
    \    { return _M_t.begin(); }\n \n       /**\n        *  Returns a read/write\
    \ iterator that points one past the last\n        *  pair in the %map.  Iteration\
    \ is done in ascending order\n        *  according to the keys.\n        */\n\
    \       iterator\n       end() _GLIBCXX_NOEXCEPT\n       { return _M_t.end();\
    \ }\n \n       /**\n        *  Returns a read-only (constant) iterator that points\
    \ one past the last\n        *  pair in the %map.  Iteration is done in ascending\
    \ order according to\n        *  the keys.\n        */\n       const_iterator\n\
    \       end() const _GLIBCXX_NOEXCEPT\n       { return _M_t.end(); }\n \n    \
    \   /**\n        *  Returns a read/write reverse iterator that points to the last\
    \ pair in\n        *  the %map.  Iteration is done in descending order according\
    \ to the\n        *  keys.\n        */\n       reverse_iterator\n       rbegin()\
    \ _GLIBCXX_NOEXCEPT\n       { return _M_t.rbegin(); }\n \n       /**\n       \
    \ *  Returns a read-only (constant) reverse iterator that points to the\n    \
    \    *  last pair in the %map.  Iteration is done in descending order\n      \
    \  *  according to the keys.\n        */\n       const_reverse_iterator\n    \
    \   rbegin() const _GLIBCXX_NOEXCEPT\n       { return _M_t.rbegin(); }\n \n  \
    \     /**\n        *  Returns a read/write reverse iterator that points to one\
    \ before the\n        *  first pair in the %map.  Iteration is done in descending\
    \ order\n        *  according to the keys.\n        */\n       reverse_iterator\n\
    \       rend() _GLIBCXX_NOEXCEPT\n       { return _M_t.rend(); }\n \n       /**\n\
    \        *  Returns a read-only (constant) reverse iterator that points to one\n\
    \        *  before the first pair in the %map.  Iteration is done in descending\n\
    \        *  order according to the keys.\n        */\n       const_reverse_iterator\n\
    \       rend() const _GLIBCXX_NOEXCEPT\n       { return _M_t.rend(); }\n \n #if\
    \ __cplusplus >= 201103L\n       /**\n        *  Returns a read-only (constant)\
    \ iterator that points to the first pair\n        *  in the %map.  Iteration is\
    \ done in ascending order according to the\n        *  keys.\n        */\n   \
    \    const_iterator\n       cbegin() const noexcept\n       { return _M_t.begin();\
    \ }\n \n       /**\n        *  Returns a read-only (constant) iterator that points\
    \ one past the last\n        *  pair in the %map.  Iteration is done in ascending\
    \ order according to\n        *  the keys.\n        */\n       const_iterator\n\
    \       cend() const noexcept\n       { return _M_t.end(); }\n \n       /**\n\
    \        *  Returns a read-only (constant) reverse iterator that points to the\n\
    \        *  last pair in the %map.  Iteration is done in descending order\n  \
    \      *  according to the keys.\n        */\n       const_reverse_iterator\n\
    \       crbegin() const noexcept\n       { return _M_t.rbegin(); }\n \n      \
    \ /**\n        *  Returns a read-only (constant) reverse iterator that points\
    \ to one\n        *  before the first pair in the %map.  Iteration is done in\
    \ descending\n        *  order according to the keys.\n        */\n       const_reverse_iterator\n\
    \       crend() const noexcept\n       { return _M_t.rend(); }\n #endif\n \n \
    \      // capacity\n       /** Returns true if the %map is empty.  (Thus begin()\
    \ would equal\n        *  end().)\n       */\n       _GLIBCXX_NODISCARD bool\n\
    \       empty() const _GLIBCXX_NOEXCEPT\n       { return _M_t.empty(); }\n \n\
    \       /** Returns the size of the %map.  */\n       size_type\n       size()\
    \ const _GLIBCXX_NOEXCEPT\n       { return _M_t.size(); }\n \n       /** Returns\
    \ the maximum size of the %map.  */\n       size_type\n       max_size() const\
    \ _GLIBCXX_NOEXCEPT\n       { return _M_t.max_size(); }\n \n       // [23.3.1.2]\
    \ element access\n       /**\n        *  @brief  Subscript ( @c [] ) access to\
    \ %map data.\n        *  @param  __k  The key for which data should be retrieved.\n\
    \        *  @return  A reference to the data of the (key,data) %pair.\n      \
    \  *\n        *  Allows for easy lookup with the subscript ( @c [] )\n       \
    \ *  operator.  Returns data associated with the key specified in\n        * \
    \ subscript.  If the key does not exist, a pair with that key\n        *  is created\
    \ using default values, which is then returned.\n        *\n        *  Lookup\
    \ requires logarithmic time.\n        */\n       mapped_type&\n       operator[](const\
    \ key_type& __k)\n       {\n     // concept requirements\n     __glibcxx_function_requires(_DefaultConstructibleConcept<mapped_type>)\n\
    \ \n     iterator __i = lower_bound(__k);\n     // __i->first is greater than\
    \ or equivalent to __k.\n     if (__i == end() || key_comp()(__k, (*__i).first))\n\
    \ #if __cplusplus >= 201103L\n       __i = _M_t._M_emplace_hint_unique(__i, std::piecewise_construct,\n\
    \                         std::tuple<const key_type&>(__k),\n                \
    \         std::tuple<>());\n #else\n       __i = insert(__i, value_type(__k, mapped_type()));\n\
    \ #endif\n     return (*__i).second;\n       }\n \n #if __cplusplus >= 201103L\n\
    \       mapped_type&\n       operator[](key_type&& __k)\n       {\n     // concept\
    \ requirements\n     __glibcxx_function_requires(_DefaultConstructibleConcept<mapped_type>)\n\
    \ \n     iterator __i = lower_bound(__k);\n     // __i->first is greater than\
    \ or equivalent to __k.\n     if (__i == end() || key_comp()(__k, (*__i).first))\n\
    \       __i = _M_t._M_emplace_hint_unique(__i, std::piecewise_construct,\n   \
    \                  std::forward_as_tuple(std::move(__k)),\n                  \
    \   std::tuple<>());\n     return (*__i).second;\n       }\n #endif\n \n     \
    \  // _GLIBCXX_RESOLVE_LIB_DEFECTS\n       // DR 464. Suggestion for new member\
    \ functions in standard containers.\n       /**\n        *  @brief  Access to\
    \ %map data.\n        *  @param  __k  The key for which data should be retrieved.\n\
    \        *  @return  A reference to the data whose key is equivalent to @a __k,\
    \ if\n        *           such a data is present in the %map.\n        *  @throw\
    \  std::out_of_range  If no such data is present.\n        */\n       mapped_type&\n\
    \       at(const key_type& __k)\n       {\n     iterator __i = lower_bound(__k);\n\
    \     if (__i == end() || key_comp()(__k, (*__i).first))\n       __throw_out_of_range(__N(\"\
    map::at\"));\n     return (*__i).second;\n       }\n \n       const mapped_type&\n\
    \       at(const key_type& __k) const\n       {\n     const_iterator __i = lower_bound(__k);\n\
    \     if (__i == end() || key_comp()(__k, (*__i).first))\n       __throw_out_of_range(__N(\"\
    map::at\"));\n     return (*__i).second;\n       }\n \n       // modifiers\n #if\
    \ __cplusplus >= 201103L\n       /**\n        *  @brief Attempts to build and\
    \ insert a std::pair into the %map.\n        *\n        *  @param __args  Arguments\
    \ used to generate a new pair instance (see\n        *\t        std::piecewise_contruct\
    \ for passing arguments to each\n        *\t        part of the pair constructor).\n\
    \        *\n        *  @return  A pair, of which the first element is an iterator\
    \ that points\n        *           to the possibly inserted pair, and the second\
    \ is a bool that\n        *           is true if the pair was actually inserted.\n\
    \        *\n        *  This function attempts to build and insert a (key, value)\
    \ %pair into\n        *  the %map.\n        *  A %map relies on unique keys and\
    \ thus a %pair is only inserted if its\n        *  first element (the key) is\
    \ not already present in the %map.\n        *\n        *  Insertion requires logarithmic\
    \ time.\n        */\n       template<typename... _Args>\n     std::pair<iterator,\
    \ bool>\n     emplace(_Args&&... __args)\n     {\n #if __cplusplus >= 201703L\n\
    \       if constexpr (sizeof...(_Args) == 2)\n         if constexpr (is_same_v<allocator_type,\
    \ allocator<value_type>>)\n           {\n         auto&& [__a, __v] = pair<_Args&...>(__args...);\n\
    \         if constexpr (__usable_key<decltype(__a)>)\n           {\n         \
    \    const key_type& __k = __a;\n             iterator __i = lower_bound(__k);\n\
    \             if (__i == end() || key_comp()(__k, (*__i).first))\n           \
    \    {\n             __i = emplace_hint(__i, std::forward<_Args>(__args)...);\n\
    \             return {__i, true};\n               }\n             return {__i,\
    \ false};\n           }\n           }\n #endif\n       return _M_t._M_emplace_unique(std::forward<_Args>(__args)...);\n\
    \     }\n \n       /**\n        *  @brief Attempts to build and insert a std::pair\
    \ into the %map.\n        *\n        *  @param  __pos  An iterator that serves\
    \ as a hint as to where the pair\n        *                should be inserted.\n\
    \        *  @param  __args  Arguments used to generate a new pair instance (see\n\
    \        *\t         std::piecewise_contruct for passing arguments to each\n \
    \       *\t         part of the pair constructor).\n        *  @return An iterator\
    \ that points to the element with key of the\n        *          std::pair built\
    \ from @a __args (may or may not be that\n        *          std::pair).\n   \
    \     *\n        *  This function is not concerned about whether the insertion\
    \ took place,\n        *  and thus does not return a boolean like the single-argument\
    \ emplace()\n        *  does.\n        *  Note that the first parameter is only\
    \ a hint and can potentially\n        *  improve the performance of the insertion\
    \ process. A bad hint would\n        *  cause no gains in efficiency.\n      \
    \  *\n        *  See\n        *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/associative.html#containers.associative.insert_hints\n\
    \        *  for more on @a hinting.\n        *\n        *  Insertion requires\
    \ logarithmic time (if the hint is not taken).\n        */\n       template<typename...\
    \ _Args>\n     iterator\n     emplace_hint(const_iterator __pos, _Args&&... __args)\n\
    \     {\n       return _M_t._M_emplace_hint_unique(__pos,\n                  \
    \        std::forward<_Args>(__args)...);\n     }\n #endif\n \n #if __cplusplus\
    \ > 201402L\n       /// Extract a node.\n       node_type\n       extract(const_iterator\
    \ __pos)\n       {\n     __glibcxx_assert(__pos != end());\n     return _M_t.extract(__pos);\n\
    \       }\n \n       /// Extract a node.\n       node_type\n       extract(const\
    \ key_type& __x)\n       { return _M_t.extract(__x); }\n \n       /// Re-insert\
    \ an extracted node.\n       insert_return_type\n       insert(node_type&& __nh)\n\
    \       { return _M_t._M_reinsert_node_unique(std::move(__nh)); }\n \n       ///\
    \ Re-insert an extracted node.\n       iterator\n       insert(const_iterator\
    \ __hint, node_type&& __nh)\n       { return _M_t._M_reinsert_node_hint_unique(__hint,\
    \ std::move(__nh)); }\n \n       template<typename, typename>\n     friend struct\
    \ std::_Rb_tree_merge_helper;\n \n       template<typename _Cmp2>\n     void\n\
    \     merge(map<_Key, _Tp, _Cmp2, _Alloc>& __source)\n     {\n       using _Merge_helper\
    \ = _Rb_tree_merge_helper<map, _Cmp2>;\n       _M_t._M_merge_unique(_Merge_helper::_S_get_tree(__source));\n\
    \     }\n \n       template<typename _Cmp2>\n     void\n     merge(map<_Key, _Tp,\
    \ _Cmp2, _Alloc>&& __source)\n     { merge(__source); }\n \n       template<typename\
    \ _Cmp2>\n     void\n     merge(multimap<_Key, _Tp, _Cmp2, _Alloc>& __source)\n\
    \     {\n       using _Merge_helper = _Rb_tree_merge_helper<map, _Cmp2>;\n   \
    \    _M_t._M_merge_unique(_Merge_helper::_S_get_tree(__source));\n     }\n \n\
    \       template<typename _Cmp2>\n     void\n     merge(multimap<_Key, _Tp, _Cmp2,\
    \ _Alloc>&& __source)\n     { merge(__source); }\n #endif // C++17\n \n #if __cplusplus\
    \ > 201402L\n #define __cpp_lib_map_try_emplace 201411L\n       /**\n        *\
    \  @brief Attempts to build and insert a std::pair into the %map.\n        *\n\
    \        *  @param __k    Key to use for finding a possibly existing pair in\n\
    \        *                the map.\n        *  @param __args  Arguments used to\
    \ generate the .second for a new pair\n        *                instance.\n  \
    \      *\n        *  @return  A pair, of which the first element is an iterator\
    \ that points\n        *           to the possibly inserted pair, and the second\
    \ is a bool that\n        *           is true if the pair was actually inserted.\n\
    \        *\n        *  This function attempts to build and insert a (key, value)\
    \ %pair into\n        *  the %map.\n        *  A %map relies on unique keys and\
    \ thus a %pair is only inserted if its\n        *  first element (the key) is\
    \ not already present in the %map.\n        *  If a %pair is not inserted, this\
    \ function has no effect.\n        *\n        *  Insertion requires logarithmic\
    \ time.\n        */\n       template <typename... _Args>\n     pair<iterator,\
    \ bool>\n     try_emplace(const key_type& __k, _Args&&... __args)\n     {\n  \
    \     iterator __i = lower_bound(__k);\n       if (__i == end() || key_comp()(__k,\
    \ (*__i).first))\n         {\n           __i = emplace_hint(__i, std::piecewise_construct,\n\
    \                  std::forward_as_tuple(__k),\n                  std::forward_as_tuple(\n\
    \                    std::forward<_Args>(__args)...));\n           return {__i,\
    \ true};\n         }\n       return {__i, false};\n     }\n \n       // move-capable\
    \ overload\n       template <typename... _Args>\n     pair<iterator, bool>\n \
    \    try_emplace(key_type&& __k, _Args&&... __args)\n     {\n       iterator __i\
    \ = lower_bound(__k);\n       if (__i == end() || key_comp()(__k, (*__i).first))\n\
    \         {\n           __i = emplace_hint(__i, std::piecewise_construct,\n  \
    \                std::forward_as_tuple(std::move(__k)),\n                  std::forward_as_tuple(\n\
    \                    std::forward<_Args>(__args)...));\n           return {__i,\
    \ true};\n         }\n       return {__i, false};\n     }\n \n       /**\n   \
    \     *  @brief Attempts to build and insert a std::pair into the %map.\n    \
    \    *\n        *  @param  __hint  An iterator that serves as a hint as to where\
    \ the\n        *                  pair should be inserted.\n        *  @param\
    \ __k    Key to use for finding a possibly existing pair in\n        *       \
    \         the map.\n        *  @param __args  Arguments used to generate the .second\
    \ for a new pair\n        *                instance.\n        *  @return An iterator\
    \ that points to the element with key of the\n        *          std::pair built\
    \ from @a __args (may or may not be that\n        *          std::pair).\n   \
    \     *\n        *  This function is not concerned about whether the insertion\
    \ took place,\n        *  and thus does not return a boolean like the single-argument\n\
    \        *  try_emplace() does. However, if insertion did not take place,\n  \
    \      *  this function has no effect.\n        *  Note that the first parameter\
    \ is only a hint and can potentially\n        *  improve the performance of the\
    \ insertion process. A bad hint would\n        *  cause no gains in efficiency.\n\
    \        *\n        *  See\n        *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/associative.html#containers.associative.insert_hints\n\
    \        *  for more on @a hinting.\n        *\n        *  Insertion requires\
    \ logarithmic time (if the hint is not taken).\n        */\n       template <typename...\
    \ _Args>\n     iterator\n     try_emplace(const_iterator __hint, const key_type&\
    \ __k,\n             _Args&&... __args)\n     {\n       iterator __i;\n      \
    \ auto __true_hint = _M_t._M_get_insert_hint_unique_pos(__hint, __k);\n      \
    \ if (__true_hint.second)\n         __i = emplace_hint(iterator(__true_hint.second),\n\
    \                    std::piecewise_construct,\n                    std::forward_as_tuple(__k),\n\
    \                    std::forward_as_tuple(\n                  std::forward<_Args>(__args)...));\n\
    \       else\n         __i = iterator(__true_hint.first);\n       return __i;\n\
    \     }\n \n       // move-capable overload\n       template <typename... _Args>\n\
    \     iterator\n     try_emplace(const_iterator __hint, key_type&& __k, _Args&&...\
    \ __args)\n     {\n       iterator __i;\n       auto __true_hint = _M_t._M_get_insert_hint_unique_pos(__hint,\
    \ __k);\n       if (__true_hint.second)\n         __i = emplace_hint(iterator(__true_hint.second),\n\
    \                    std::piecewise_construct,\n                    std::forward_as_tuple(std::move(__k)),\n\
    \                    std::forward_as_tuple(\n                  std::forward<_Args>(__args)...));\n\
    \       else\n         __i = iterator(__true_hint.first);\n       return __i;\n\
    \     }\n #endif\n \n       /**\n        *  @brief Attempts to insert a std::pair\
    \ into the %map.\n        *  @param __x Pair to be inserted (see std::make_pair\
    \ for easy\n        *\t     creation of pairs).\n        *\n        *  @return\
    \  A pair, of which the first element is an iterator that\n        *         \
    \  points to the possibly inserted pair, and the second is\n        *        \
    \   a bool that is true if the pair was actually inserted.\n        *\n      \
    \  *  This function attempts to insert a (key, value) %pair into the %map.\n \
    \       *  A %map relies on unique keys and thus a %pair is only inserted if its\n\
    \        *  first element (the key) is not already present in the %map.\n    \
    \    *\n        *  Insertion requires logarithmic time.\n        *  @{\n     \
    \   */\n       std::pair<iterator, bool>\n       insert(const value_type& __x)\n\
    \       { return _M_t._M_insert_unique(__x); }\n \n #if __cplusplus >= 201103L\n\
    \       // _GLIBCXX_RESOLVE_LIB_DEFECTS\n       // 2354. Unnecessary copying when\
    \ inserting into maps with braced-init\n       std::pair<iterator, bool>\n   \
    \    insert(value_type&& __x)\n       { return _M_t._M_insert_unique(std::move(__x));\
    \ }\n \n       template<typename _Pair>\n     __enable_if_t<is_constructible<value_type,\
    \ _Pair>::value,\n               pair<iterator, bool>>\n     insert(_Pair&& __x)\n\
    \     {\n #if __cplusplus >= 201703L\n       using _P2 = remove_reference_t<_Pair>;\n\
    \       if constexpr (__is_pair<remove_const_t<_P2>>)\n         if constexpr (is_same_v<allocator_type,\
    \ allocator<value_type>>)\n           if constexpr (__usable_key<typename _P2::first_type>)\n\
    \         {\n           const key_type& __k = __x.first;\n           iterator\
    \ __i = lower_bound(__k);\n           if (__i == end() || key_comp()(__k, (*__i).first))\n\
    \             {\n               __i = emplace_hint(__i, std::forward<_Pair>(__x));\n\
    \               return {__i, true};\n             }\n           return {__i, false};\n\
    \         }\n #endif\n       return _M_t._M_emplace_unique(std::forward<_Pair>(__x));\n\
    \     }\n #endif\n       /// @}\n \n #if __cplusplus >= 201103L\n       /**\n\
    \        *  @brief Attempts to insert a list of std::pairs into the %map.\n  \
    \      *  @param  __list  A std::initializer_list<value_type> of pairs to be\n\
    \        *                  inserted.\n        *\n        *  Complexity similar\
    \ to that of the range constructor.\n        */\n       void\n       insert(std::initializer_list<value_type>\
    \ __list)\n       { insert(__list.begin(), __list.end()); }\n #endif\n \n    \
    \   /**\n        *  @brief Attempts to insert a std::pair into the %map.\n   \
    \     *  @param  __position  An iterator that serves as a hint as to where the\n\
    \        *                    pair should be inserted.\n        *  @param  __x\
    \  Pair to be inserted (see std::make_pair for easy creation\n        *      \
    \         of pairs).\n        *  @return An iterator that points to the element\
    \ with key of\n        *           @a __x (may or may not be the %pair passed\
    \ in).\n        *\n \n        *  This function is not concerned about whether\
    \ the insertion\n        *  took place, and thus does not return a boolean like\
    \ the\n        *  single-argument insert() does.  Note that the first\n      \
    \  *  parameter is only a hint and can potentially improve the\n        *  performance\
    \ of the insertion process.  A bad hint would\n        *  cause no gains in efficiency.\n\
    \        *\n        *  See\n        *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/associative.html#containers.associative.insert_hints\n\
    \        *  for more on @a hinting.\n        *\n        *  Insertion requires\
    \ logarithmic time (if the hint is not taken).\n        *  @{\n        */\n  \
    \     iterator\n #if __cplusplus >= 201103L\n       insert(const_iterator __position,\
    \ const value_type& __x)\n #else\n       insert(iterator __position, const value_type&\
    \ __x)\n #endif\n       { return _M_t._M_insert_unique_(__position, __x); }\n\
    \ \n #if __cplusplus >= 201103L\n       // _GLIBCXX_RESOLVE_LIB_DEFECTS\n    \
    \   // 2354. Unnecessary copying when inserting into maps with braced-init\n \
    \      iterator\n       insert(const_iterator __position, value_type&& __x)\n\
    \       { return _M_t._M_insert_unique_(__position, std::move(__x)); }\n \n  \
    \     template<typename _Pair>\n     __enable_if_t<is_constructible<value_type,\
    \ _Pair>::value, iterator>\n     insert(const_iterator __position, _Pair&& __x)\n\
    \     {\n       return _M_t._M_emplace_hint_unique(__position,\n             \
    \             std::forward<_Pair>(__x));\n     }\n #endif\n       /// @}\n \n\
    \       /**\n        *  @brief Template function that attempts to insert a range\
    \ of elements.\n        *  @param  __first  Iterator pointing to the start of\
    \ the range to be\n        *                   inserted.\n        *  @param  __last\
    \  Iterator pointing to the end of the range.\n        *\n        *  Complexity\
    \ similar to that of the range constructor.\n        */\n       template<typename\
    \ _InputIterator>\n     void\n     insert(_InputIterator __first, _InputIterator\
    \ __last)\n     { _M_t._M_insert_range_unique(__first, __last); }\n \n #if __cplusplus\
    \ > 201402L\n       /**\n        *  @brief Attempts to insert or assign a std::pair\
    \ into the %map.\n        *  @param __k    Key to use for finding a possibly existing\
    \ pair in\n        *                the map.\n        *  @param __obj  Argument\
    \ used to generate the .second for a pair\n        *                instance.\n\
    \        *\n        *  @return  A pair, of which the first element is an iterator\
    \ that\n        *           points to the possibly inserted pair, and the second\
    \ is\n        *           a bool that is true if the pair was actually inserted.\n\
    \        *\n        *  This function attempts to insert a (key, value) %pair into\
    \ the %map.\n        *  A %map relies on unique keys and thus a %pair is only\
    \ inserted if its\n        *  first element (the key) is not already present in\
    \ the %map.\n        *  If the %pair was already in the %map, the .second of the\
    \ %pair\n        *  is assigned from __obj.\n        *\n        *  Insertion requires\
    \ logarithmic time.\n        */\n       template <typename _Obj>\n     pair<iterator,\
    \ bool>\n     insert_or_assign(const key_type& __k, _Obj&& __obj)\n     {\n  \
    \     iterator __i = lower_bound(__k);\n       if (__i == end() || key_comp()(__k,\
    \ (*__i).first))\n         {\n           __i = emplace_hint(__i, std::piecewise_construct,\n\
    \                  std::forward_as_tuple(__k),\n                  std::forward_as_tuple(\n\
    \                    std::forward<_Obj>(__obj)));\n           return {__i, true};\n\
    \         }\n       (*__i).second = std::forward<_Obj>(__obj);\n       return\
    \ {__i, false};\n     }\n \n       // move-capable overload\n       template <typename\
    \ _Obj>\n     pair<iterator, bool>\n     insert_or_assign(key_type&& __k, _Obj&&\
    \ __obj)\n     {\n       iterator __i = lower_bound(__k);\n       if (__i == end()\
    \ || key_comp()(__k, (*__i).first))\n         {\n           __i = emplace_hint(__i,\
    \ std::piecewise_construct,\n                  std::forward_as_tuple(std::move(__k)),\n\
    \                  std::forward_as_tuple(\n                    std::forward<_Obj>(__obj)));\n\
    \           return {__i, true};\n         }\n       (*__i).second = std::forward<_Obj>(__obj);\n\
    \       return {__i, false};\n     }\n \n       /**\n        *  @brief Attempts\
    \ to insert or assign a std::pair into the %map.\n        *  @param  __hint  An\
    \ iterator that serves as a hint as to where the\n        *                  pair\
    \ should be inserted.\n        *  @param __k    Key to use for finding a possibly\
    \ existing pair in\n        *                the map.\n        *  @param __obj\
    \  Argument used to generate the .second for a pair\n        *               \
    \ instance.\n        *\n        *  @return An iterator that points to the element\
    \ with key of\n        *           @a __x (may or may not be the %pair passed\
    \ in).\n        *\n        *  This function attempts to insert a (key, value)\
    \ %pair into the %map.\n        *  A %map relies on unique keys and thus a %pair\
    \ is only inserted if its\n        *  first element (the key) is not already present\
    \ in the %map.\n        *  If the %pair was already in the %map, the .second of\
    \ the %pair\n        *  is assigned from __obj.\n        *\n        *  Insertion\
    \ requires logarithmic time.\n        */\n       template <typename _Obj>\n  \
    \   iterator\n     insert_or_assign(const_iterator __hint,\n              const\
    \ key_type& __k, _Obj&& __obj)\n     {\n       iterator __i;\n       auto __true_hint\
    \ = _M_t._M_get_insert_hint_unique_pos(__hint, __k);\n       if (__true_hint.second)\n\
    \         {\n           return emplace_hint(iterator(__true_hint.second),\n  \
    \                 std::piecewise_construct,\n                   std::forward_as_tuple(__k),\n\
    \                   std::forward_as_tuple(\n                     std::forward<_Obj>(__obj)));\n\
    \         }\n       __i = iterator(__true_hint.first);\n       (*__i).second =\
    \ std::forward<_Obj>(__obj);\n       return __i;\n     }\n \n       // move-capable\
    \ overload\n       template <typename _Obj>\n     iterator\n     insert_or_assign(const_iterator\
    \ __hint, key_type&& __k, _Obj&& __obj)\n     {\n       iterator __i;\n      \
    \ auto __true_hint = _M_t._M_get_insert_hint_unique_pos(__hint, __k);\n      \
    \ if (__true_hint.second)\n         {\n           return emplace_hint(iterator(__true_hint.second),\n\
    \                   std::piecewise_construct,\n                   std::forward_as_tuple(std::move(__k)),\n\
    \                   std::forward_as_tuple(\n                     std::forward<_Obj>(__obj)));\n\
    \         }\n       __i = iterator(__true_hint.first);\n       (*__i).second =\
    \ std::forward<_Obj>(__obj);\n       return __i;\n     }\n #endif\n \n #if __cplusplus\
    \ >= 201103L\n       // _GLIBCXX_RESOLVE_LIB_DEFECTS\n       // DR 130. Associative\
    \ erase should return an iterator.\n       /**\n        *  @brief Erases an element\
    \ from a %map.\n        *  @param  __position  An iterator pointing to the element\
    \ to be erased.\n        *  @return An iterator pointing to the element immediately\
    \ following\n        *          @a position prior to the element being erased.\
    \ If no such\n        *          element exists, end() is returned.\n        *\n\
    \        *  This function erases an element, pointed to by the given\n       \
    \ *  iterator, from a %map.  Note that this function only erases\n        *  the\
    \ element, and that if the element is itself a pointer,\n        *  the pointed-to\
    \ memory is not touched in any way.  Managing\n        *  the pointer is the user's\
    \ responsibility.\n        *\n        *  @{\n        */\n       iterator\n   \
    \    erase(const_iterator __position)\n       { return _M_t.erase(__position);\
    \ }\n \n       // LWG 2059\n       _GLIBCXX_ABI_TAG_CXX11\n       iterator\n \
    \      erase(iterator __position)\n       { return _M_t.erase(__position); }\n\
    \       /// @}\n #else\n       /**\n        *  @brief Erases an element from a\
    \ %map.\n        *  @param  __position  An iterator pointing to the element to\
    \ be erased.\n        *\n        *  This function erases an element, pointed to\
    \ by the given\n        *  iterator, from a %map.  Note that this function only\
    \ erases\n        *  the element, and that if the element is itself a pointer,\n\
    \        *  the pointed-to memory is not touched in any way.  Managing\n     \
    \   *  the pointer is the user's responsibility.\n        */\n       void\n  \
    \     erase(iterator __position)\n       { _M_t.erase(__position); }\n #endif\n\
    \ \n       /**\n        *  @brief Erases elements according to the provided key.\n\
    \        *  @param  __x  Key of element to be erased.\n        *  @return  The\
    \ number of elements erased.\n        *\n        *  This function erases all the\
    \ elements located by the given key from\n        *  a %map.\n        *  Note\
    \ that this function only erases the element, and that if\n        *  the element\
    \ is itself a pointer, the pointed-to memory is not touched\n        *  in any\
    \ way.  Managing the pointer is the user's responsibility.\n        */\n     \
    \  size_type\n       erase(const key_type& __x)\n       { return _M_t.erase(__x);\
    \ }\n \n #if __cplusplus >= 201103L\n       // _GLIBCXX_RESOLVE_LIB_DEFECTS\n\
    \       // DR 130. Associative erase should return an iterator.\n       /**\n\
    \        *  @brief Erases a [first,last) range of elements from a %map.\n    \
    \    *  @param  __first  Iterator pointing to the start of the range to be\n \
    \       *                   erased.\n        *  @param __last Iterator pointing\
    \ to the end of the range to\n        *                be erased.\n        * \
    \ @return The iterator @a __last.\n        *\n        *  This function erases\
    \ a sequence of elements from a %map.\n        *  Note that this function only\
    \ erases the element, and that if\n        *  the element is itself a pointer,\
    \ the pointed-to memory is not touched\n        *  in any way.  Managing the pointer\
    \ is the user's responsibility.\n        */\n       iterator\n       erase(const_iterator\
    \ __first, const_iterator __last)\n       { return _M_t.erase(__first, __last);\
    \ }\n #else\n       /**\n        *  @brief Erases a [__first,__last) range of\
    \ elements from a %map.\n        *  @param  __first  Iterator pointing to the\
    \ start of the range to be\n        *                   erased.\n        *  @param\
    \ __last Iterator pointing to the end of the range to\n        *             \
    \   be erased.\n        *\n        *  This function erases a sequence of elements\
    \ from a %map.\n        *  Note that this function only erases the element, and\
    \ that if\n        *  the element is itself a pointer, the pointed-to memory is\
    \ not touched\n        *  in any way.  Managing the pointer is the user's responsibility.\n\
    \        */\n       void\n       erase(iterator __first, iterator __last)\n  \
    \     { _M_t.erase(__first, __last); }\n #endif\n \n       /**\n        *  @brief\
    \  Swaps data with another %map.\n        *  @param  __x  A %map of the same element\
    \ and allocator types.\n        *\n        *  This exchanges the elements between\
    \ two maps in constant\n        *  time.  (It is only swapping a pointer, an integer,\
    \ and an\n        *  instance of the @c Compare type (which itself is often\n\
    \        *  stateless and empty), so it should be quite fast.)  Note\n       \
    \ *  that the global std::swap() function is specialized such\n        *  that\
    \ std::swap(m1,m2) will feed to this function.\n        *\n        *  Whether\
    \ the allocators are swapped depends on the allocator traits.\n        */\n  \
    \     void\n       swap(map& __x)\n       _GLIBCXX_NOEXCEPT_IF(__is_nothrow_swappable<_Compare>::value)\n\
    \       { _M_t.swap(__x._M_t); }\n \n       /**\n        *  Erases all elements\
    \ in a %map.  Note that this function only\n        *  erases the elements, and\
    \ that if the elements themselves are\n        *  pointers, the pointed-to memory\
    \ is not touched in any way.\n        *  Managing the pointer is the user's responsibility.\n\
    \        */\n       void\n       clear() _GLIBCXX_NOEXCEPT\n       { _M_t.clear();\
    \ }\n \n       // observers\n       /**\n        *  Returns the key comparison\
    \ object out of which the %map was\n        *  constructed.\n        */\n    \
    \   key_compare\n       key_comp() const\n       { return _M_t.key_comp(); }\n\
    \ \n       /**\n        *  Returns a value comparison object, built from the key\
    \ comparison\n        *  object out of which the %map was constructed.\n     \
    \   */\n       value_compare\n       value_comp() const\n       { return value_compare(_M_t.key_comp());\
    \ }\n \n       // [23.3.1.3] map operations\n \n       ///@{\n       /**\n   \
    \     *  @brief Tries to locate an element in a %map.\n        *  @param  __x\
    \  Key of (key, value) %pair to be located.\n        *  @return  Iterator pointing\
    \ to sought-after element, or end() if not\n        *           found.\n     \
    \   *\n        *  This function takes a key and tries to locate the element with\
    \ which\n        *  the key matches.  If successful the function returns an iterator\n\
    \        *  pointing to the sought after %pair.  If unsuccessful it returns the\n\
    \        *  past-the-end ( @c end() ) iterator.\n        */\n \n       iterator\n\
    \       find(const key_type& __x)\n       { return _M_t.find(__x); }\n \n #if\
    \ __cplusplus > 201103L\n       template<typename _Kt>\n     auto\n     find(const\
    \ _Kt& __x) -> decltype(_M_t._M_find_tr(__x))\n     { return _M_t._M_find_tr(__x);\
    \ }\n #endif\n       ///@}\n \n       ///@{\n       /**\n        *  @brief Tries\
    \ to locate an element in a %map.\n        *  @param  __x  Key of (key, value)\
    \ %pair to be located.\n        *  @return  Read-only (constant) iterator pointing\
    \ to sought-after\n        *           element, or end() if not found.\n     \
    \   *\n        *  This function takes a key and tries to locate the element with\
    \ which\n        *  the key matches.  If successful the function returns a constant\n\
    \        *  iterator pointing to the sought after %pair. If unsuccessful it\n\
    \        *  returns the past-the-end ( @c end() ) iterator.\n        */\n \n \
    \      const_iterator\n       find(const key_type& __x) const\n       { return\
    \ _M_t.find(__x); }\n \n #if __cplusplus > 201103L\n       template<typename _Kt>\n\
    \     auto\n     find(const _Kt& __x) const -> decltype(_M_t._M_find_tr(__x))\n\
    \     { return _M_t._M_find_tr(__x); }\n #endif\n       ///@}\n \n       ///@{\n\
    \       /**\n        *  @brief  Finds the number of elements with given key.\n\
    \        *  @param  __x  Key of (key, value) pairs to be located.\n        * \
    \ @return  Number of elements with specified key.\n        *\n        *  This\
    \ function only makes sense for multimaps; for map the result will\n        *\
    \  either be 0 (not present) or 1 (present).\n        */\n       size_type\n \
    \      count(const key_type& __x) const\n       { return _M_t.find(__x) == _M_t.end()\
    \ ? 0 : 1; }\n \n #if __cplusplus > 201103L\n       template<typename _Kt>\n \
    \    auto\n     count(const _Kt& __x) const -> decltype(_M_t._M_count_tr(__x))\n\
    \     { return _M_t._M_count_tr(__x); }\n #endif\n       ///@}\n \n #if __cplusplus\
    \ > 201703L\n       ///@{\n       /**\n        *  @brief  Finds whether an element\
    \ with the given key exists.\n        *  @param  __x  Key of (key, value) pairs\
    \ to be located.\n        *  @return  True if there is an element with the specified\
    \ key.\n        */\n       bool\n       contains(const key_type& __x) const\n\
    \       { return _M_t.find(__x) != _M_t.end(); }\n \n       template<typename\
    \ _Kt>\n     auto\n     contains(const _Kt& __x) const\n     -> decltype(_M_t._M_find_tr(__x),\
    \ void(), true)\n     { return _M_t._M_find_tr(__x) != _M_t.end(); }\n       ///@}\n\
    \ #endif\n \n       ///@{\n       /**\n        *  @brief Finds the beginning of\
    \ a subsequence matching given key.\n        *  @param  __x  Key of (key, value)\
    \ pair to be located.\n        *  @return  Iterator pointing to first element\
    \ equal to or greater\n        *           than key, or end().\n        *\n  \
    \      *  This function returns the first element of a subsequence of elements\n\
    \        *  that matches the given key.  If unsuccessful it returns an iterator\n\
    \        *  pointing to the first element that has a greater value than given\
    \ key\n        *  or end() if no such element exists.\n        */\n       iterator\n\
    \       lower_bound(const key_type& __x)\n       { return _M_t.lower_bound(__x);\
    \ }\n \n #if __cplusplus > 201103L\n       template<typename _Kt>\n     auto\n\
    \     lower_bound(const _Kt& __x)\n     -> decltype(iterator(_M_t._M_lower_bound_tr(__x)))\n\
    \     { return iterator(_M_t._M_lower_bound_tr(__x)); }\n #endif\n       ///@}\n\
    \ \n       ///@{\n       /**\n        *  @brief Finds the beginning of a subsequence\
    \ matching given key.\n        *  @param  __x  Key of (key, value) pair to be\
    \ located.\n        *  @return  Read-only (constant) iterator pointing to first\
    \ element\n        *           equal to or greater than key, or end().\n     \
    \   *\n        *  This function returns the first element of a subsequence of\
    \ elements\n        *  that matches the given key.  If unsuccessful it returns\
    \ an iterator\n        *  pointing to the first element that has a greater value\
    \ than given key\n        *  or end() if no such element exists.\n        */\n\
    \       const_iterator\n       lower_bound(const key_type& __x) const\n      \
    \ { return _M_t.lower_bound(__x); }\n \n #if __cplusplus > 201103L\n       template<typename\
    \ _Kt>\n     auto\n     lower_bound(const _Kt& __x) const\n     -> decltype(const_iterator(_M_t._M_lower_bound_tr(__x)))\n\
    \     { return const_iterator(_M_t._M_lower_bound_tr(__x)); }\n #endif\n     \
    \  ///@}\n \n       ///@{\n       /**\n        *  @brief Finds the end of a subsequence\
    \ matching given key.\n        *  @param  __x  Key of (key, value) pair to be\
    \ located.\n        *  @return Iterator pointing to the first element\n      \
    \  *          greater than key, or end().\n        */\n       iterator\n     \
    \  upper_bound(const key_type& __x)\n       { return _M_t.upper_bound(__x); }\n\
    \ \n #if __cplusplus > 201103L\n       template<typename _Kt>\n     auto\n   \
    \  upper_bound(const _Kt& __x)\n     -> decltype(iterator(_M_t._M_upper_bound_tr(__x)))\n\
    \     { return iterator(_M_t._M_upper_bound_tr(__x)); }\n #endif\n       ///@}\n\
    \ \n       ///@{\n       /**\n        *  @brief Finds the end of a subsequence\
    \ matching given key.\n        *  @param  __x  Key of (key, value) pair to be\
    \ located.\n        *  @return  Read-only (constant) iterator pointing to first\
    \ iterator\n        *           greater than key, or end().\n        */\n    \
    \   const_iterator\n       upper_bound(const key_type& __x) const\n       { return\
    \ _M_t.upper_bound(__x); }\n \n #if __cplusplus > 201103L\n       template<typename\
    \ _Kt>\n     auto\n     upper_bound(const _Kt& __x) const\n     -> decltype(const_iterator(_M_t._M_upper_bound_tr(__x)))\n\
    \     { return const_iterator(_M_t._M_upper_bound_tr(__x)); }\n #endif\n     \
    \  ///@}\n \n       ///@{\n       /**\n        *  @brief Finds a subsequence matching\
    \ given key.\n        *  @param  __x  Key of (key, value) pairs to be located.\n\
    \        *  @return  Pair of iterators that possibly points to the subsequence\n\
    \        *           matching given key.\n        *\n        *  This function\
    \ is equivalent to\n        *  @code\n        *    std::make_pair(c.lower_bound(val),\n\
    \        *                   c.upper_bound(val))\n        *  @endcode\n      \
    \  *  (but is faster than making the calls separately).\n        *\n        *\
    \  This function probably only makes sense for multimaps.\n        */\n      \
    \ std::pair<iterator, iterator>\n       equal_range(const key_type& __x)\n   \
    \    { return _M_t.equal_range(__x); }\n \n #if __cplusplus > 201103L\n      \
    \ template<typename _Kt>\n     auto\n     equal_range(const _Kt& __x)\n     ->\
    \ decltype(pair<iterator, iterator>(_M_t._M_equal_range_tr(__x)))\n     { return\
    \ pair<iterator, iterator>(_M_t._M_equal_range_tr(__x)); }\n #endif\n       ///@}\n\
    \ \n       ///@{\n       /**\n        *  @brief Finds a subsequence matching given\
    \ key.\n        *  @param  __x  Key of (key, value) pairs to be located.\n   \
    \     *  @return  Pair of read-only (constant) iterators that possibly points\n\
    \        *           to the subsequence matching given key.\n        *\n     \
    \   *  This function is equivalent to\n        *  @code\n        *    std::make_pair(c.lower_bound(val),\n\
    \        *                   c.upper_bound(val))\n        *  @endcode\n      \
    \  *  (but is faster than making the calls separately).\n        *\n        *\
    \  This function probably only makes sense for multimaps.\n        */\n      \
    \ std::pair<const_iterator, const_iterator>\n       equal_range(const key_type&\
    \ __x) const\n       { return _M_t.equal_range(__x); }\n \n #if __cplusplus >\
    \ 201103L\n       template<typename _Kt>\n     auto\n     equal_range(const _Kt&\
    \ __x) const\n     -> decltype(pair<const_iterator, const_iterator>(\n       \
    \    _M_t._M_equal_range_tr(__x)))\n     {\n       return pair<const_iterator,\
    \ const_iterator>(\n           _M_t._M_equal_range_tr(__x));\n     }\n #endif\n\
    \       ///@}\n \n       template<typename _K1, typename _T1, typename _C1, typename\
    \ _A1>\n     friend bool\n     operator==(const map<_K1, _T1, _C1, _A1>&,\n  \
    \          const map<_K1, _T1, _C1, _A1>&);\n \n #if __cpp_lib_three_way_comparison\n\
    \       template<typename _K1, typename _T1, typename _C1, typename _A1>\n   \
    \  friend __detail::__synth3way_t<pair<const _K1, _T1>>\n     operator<=>(const\
    \ map<_K1, _T1, _C1, _A1>&,\n             const map<_K1, _T1, _C1, _A1>&);\n #else\n\
    \       template<typename _K1, typename _T1, typename _C1, typename _A1>\n   \
    \  friend bool\n     operator<(const map<_K1, _T1, _C1, _A1>&,\n           const\
    \ map<_K1, _T1, _C1, _A1>&);\n #endif\n     };\n \n \n #if __cpp_deduction_guides\
    \ >= 201606\n \n   template<typename _InputIterator,\n        typename _Compare\
    \ = less<__iter_key_t<_InputIterator>>,\n        typename _Allocator = allocator<__iter_to_alloc_t<_InputIterator>>,\n\
    \        typename = _RequireInputIter<_InputIterator>,\n        typename = _RequireNotAllocator<_Compare>,\n\
    \        typename = _RequireAllocator<_Allocator>>\n     map(_InputIterator, _InputIterator,\n\
    \     _Compare = _Compare(), _Allocator = _Allocator())\n     -> map<__iter_key_t<_InputIterator>,\
    \ __iter_val_t<_InputIterator>,\n        _Compare, _Allocator>;\n \n   template<typename\
    \ _Key, typename _Tp, typename _Compare = less<_Key>,\n        typename _Allocator\
    \ = allocator<pair<const _Key, _Tp>>,\n        typename = _RequireNotAllocator<_Compare>,\n\
    \        typename = _RequireAllocator<_Allocator>>\n     map(initializer_list<pair<_Key,\
    \ _Tp>>,\n     _Compare = _Compare(), _Allocator = _Allocator())\n     -> map<_Key,\
    \ _Tp, _Compare, _Allocator>;\n \n   template <typename _InputIterator, typename\
    \ _Allocator,\n         typename = _RequireInputIter<_InputIterator>,\n      \
    \   typename = _RequireAllocator<_Allocator>>\n     map(_InputIterator, _InputIterator,\
    \ _Allocator)\n     -> map<__iter_key_t<_InputIterator>, __iter_val_t<_InputIterator>,\n\
    \        less<__iter_key_t<_InputIterator>>, _Allocator>;\n \n   template<typename\
    \ _Key, typename _Tp, typename _Allocator,\n        typename = _RequireAllocator<_Allocator>>\n\
    \     map(initializer_list<pair<_Key, _Tp>>, _Allocator)\n     -> map<_Key, _Tp,\
    \ less<_Key>, _Allocator>;\n \n #endif // deduction guides\n \n   /**\n    * \
    \ @brief  Map equality comparison.\n    *  @param  __x  A %map.\n    *  @param\
    \  __y  A %map of the same type as @a x.\n    *  @return  True iff the size and\
    \ elements of the maps are equal.\n    *\n    *  This is an equivalence relation.\
    \  It is linear in the size of the\n    *  maps.  Maps are considered equivalent\
    \ if their sizes are equal,\n    *  and if corresponding elements compare equal.\n\
    \   */\n   template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>\n\
    \     inline bool\n     operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,\n\
    \            const map<_Key, _Tp, _Compare, _Alloc>& __y)\n     { return __x._M_t\
    \ == __y._M_t; }\n \n #if __cpp_lib_three_way_comparison\n   /**\n    *  @brief\
    \  Map ordering relation.\n    *  @param  __x  A `map`.\n    *  @param  __y  A\
    \ `map` of the same type as `x`.\n    *  @return  A value indicating whether `__x`\
    \ is less than, equal to,\n    *           greater than, or incomparable with\
    \ `__y`.\n    *\n    *  This is a total ordering relation.  It is linear in the\
    \ size of the\n    *  maps.  The elements must be comparable with @c <.\n    *\n\
    \    *  See `std::lexicographical_compare_three_way()` for how the determination\n\
    \    *  is made. This operator is used to synthesize relational operators like\n\
    \    *  `<` and `>=` etc.\n   */\n   template<typename _Key, typename _Tp, typename\
    \ _Compare, typename _Alloc>\n     inline __detail::__synth3way_t<pair<const _Key,\
    \ _Tp>>\n     operator<=>(const map<_Key, _Tp, _Compare, _Alloc>& __x,\n     \
    \    const map<_Key, _Tp, _Compare, _Alloc>& __y)\n     { return __x._M_t <=>\
    \ __y._M_t; }\n #else\n   /**\n    *  @brief  Map ordering relation.\n    *  @param\
    \  __x  A %map.\n    *  @param  __y  A %map of the same type as @a x.\n    * \
    \ @return  True iff @a x is lexicographically less than @a y.\n    *\n    *  This\
    \ is a total ordering relation.  It is linear in the size of the\n    *  maps.\
    \  The elements must be comparable with @c <.\n    *\n    *  See std::lexicographical_compare()\
    \ for how the determination is made.\n   */\n   template<typename _Key, typename\
    \ _Tp, typename _Compare, typename _Alloc>\n     inline bool\n     operator<(const\
    \ map<_Key, _Tp, _Compare, _Alloc>& __x,\n           const map<_Key, _Tp, _Compare,\
    \ _Alloc>& __y)\n     { return __x._M_t < __y._M_t; }\n \n   /// Based on operator==\n\
    \   template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>\n\
    \     inline bool\n     operator!=(const map<_Key, _Tp, _Compare, _Alloc>& __x,\n\
    \            const map<_Key, _Tp, _Compare, _Alloc>& __y)\n     { return !(__x\
    \ == __y); }\n \n   /// Based on operator<\n   template<typename _Key, typename\
    \ _Tp, typename _Compare, typename _Alloc>\n     inline bool\n     operator>(const\
    \ map<_Key, _Tp, _Compare, _Alloc>& __x,\n           const map<_Key, _Tp, _Compare,\
    \ _Alloc>& __y)\n     { return __y < __x; }\n \n   /// Based on operator<\n  \
    \ template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>\n\
    \     inline bool\n     operator<=(const map<_Key, _Tp, _Compare, _Alloc>& __x,\n\
    \            const map<_Key, _Tp, _Compare, _Alloc>& __y)\n     { return !(__y\
    \ < __x); }\n \n   /// Based on operator<\n   template<typename _Key, typename\
    \ _Tp, typename _Compare, typename _Alloc>\n     inline bool\n     operator>=(const\
    \ map<_Key, _Tp, _Compare, _Alloc>& __x,\n            const map<_Key, _Tp, _Compare,\
    \ _Alloc>& __y)\n     { return !(__x < __y); }\n #endif // three-way comparison\n\
    \ \n   /// See std::map::swap().\n   template<typename _Key, typename _Tp, typename\
    \ _Compare, typename _Alloc>\n     inline void\n     swap(map<_Key, _Tp, _Compare,\
    \ _Alloc>& __x,\n      map<_Key, _Tp, _Compare, _Alloc>& __y)\n     _GLIBCXX_NOEXCEPT_IF(noexcept(__x.swap(__y)))\n\
    \     { __x.swap(__y); }\n \n _GLIBCXX_END_NAMESPACE_CONTAINER\n \n #if __cplusplus\
    \ > 201402L\n   // Allow std::map access to internals of compatible maps.\n  \
    \ \n #endif // C++17\n \n _GLIBCXX_END_NAMESPACE_VERSION\n } // namespace std\n\
    \ \n #endif /* _STL_MAP_H */\n "
  dependsOn: []
  isVerificationFile: false
  path: Map.hpp
  requiredBy: []
  timestamp: '2025-03-28 21:19:52+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Map.hpp
layout: document
redirect_from:
- /library/Map.hpp
- /library/Map.hpp.html
title: A standard container made up of (key,value) pairs, which can be
---
