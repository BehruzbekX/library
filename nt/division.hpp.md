---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"nt/division.hpp\"\n\nnamespace nt {\n    template<typename\
    \ T> struct bigger_type { };\n    template<typename T> using bigger_type_t = typename\
    \ bigger_type<T>::type;\n    template<> struct bigger_type<int> { using type =\
    \ long long; };\n    template<> struct bigger_type<unsigned int>{ using type =\
    \ unsigned long long; };\n    //template<> struct bigger_type<int64_t>{using type\
    \ = __int128;};\n    //template<> struct bigger_type<uint64_t>{using type = unsigned\
    \ __int128;};\n \n    template<typename int_t = unsigned long long> struct mod_int\
    \ {\n        static inline int_t add( int_t const &a, int_t const &b, int_t const\
    \ &mod ){\n            int_t ret = a + b;\n            if( ret >= mod ) ret -=\
    \ mod;\n            return ret;\n        }\n \n        static inline int_t sub(\
    \ int_t const &a, int_t const &b, int_t const &mod ){\n            return add(\
    \ a, mod - b );\n        }\n \n        static inline int_t mul( int_t const &a,\
    \ int_t const &b, int_t const &mod ){\n            uint64_t ret = a * ( uint64_t\
    \ ) b - ( uint64_t ) ( ( long double ) a * b / mod - 1.1 ) * mod;\n          \
    \  if( -ret < ret ){\n                ret = mod - 1 - ( -ret - 1 ) % mod;\n  \
    \          } else {\n                ret %= mod;\n            }\t\t\t\t\n    \
    \        int64_t out = ret;\n            return out;\n        }\n \n        static\
    \ inline int_t pow( int_t const &a, int_t const &b, int_t const &mod ){\n    \
    \        int_t ret = 1;\n            int_t base = a;\n            for( int i =\
    \ 0; b >> i; ++i ){\n                if( ( b >> i ) & 1 ) ret = mul( ret, base,\
    \ mod );\n                base = mul( base, base, mod );\n            }\n    \
    \        return ret;\n        }\n \n    };\n \n    template<typename T> typename\
    \ enable_if<is_integral<T>::value, bool>::type is_prime( T x ){\n        if( x\
    \ < T( 4 ) ) return x > T( 1 );\n        for( T i = 2; i * i <= x; ++i ){\n  \
    \          if( x % i == 0 ) \n                return false;\n        }\n     \
    \   return true;\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ bool>::type miller_rabin_single(T const&x, T base){\n        if( x < T( 4 )\
    \ ) return x > T( 1 );\n        if( x % 2 == 0 ) return false;\n        base %=\
    \ x;\n        if( base == 0 ) return true;\n \n        T xm1 = x - 1;\n      \
    \  int j = 1;\n        T d = xm1 / 2;\n        while( d % 2 == 0 ){ // could use\
    \ __builtin_ctz\n            d /= 2;\n            ++j;\n        }\n \n       \
    \ T t = mod_int<T>::pow( base, d, x );\n        if( t == T( 1 ) || t == T( xm1\
    \ ) ) return true;\n        for( int k = 1; k < j; ++k ){\n            t = mod_int<T>::mul(\
    \ t, t, x );\n            if( t == xm1 ) return true;\n            if( t <= 1\
    \ ) break;\n        }\n        return false;\n    }\n \n    template<typename\
    \ T> typename enable_if<is_integral<T>::value, bool>::type miller_rabin_multi(\
    \ T const& ){ return true; }\n    template<typename T, typename... S> \n    typename\
    \ enable_if<is_integral<T>::value, bool>::type miller_rabin_multi( T const &x,\
    \ T const &base, S const &...bases ){\n        if( !miller_rabin_single( x, base\
    \ ) ) return false;\n        return miller_rabin_multi( x, bases... );\n    }\n\
    \ \n    template<typename T> typename enable_if<is_integral<T>::value, bool>::type\
    \ miller_rabin( T const&x ){\n        if( x < 316349281 ) return miller_rabin_multi(\
    \ x, T( 11000544 ), T( 31481107 ) );\n        if( x < 4759123141ull ) return miller_rabin_multi(\
    \ x, T( 2 ), T( 7 ), T( 61 ) );\n        return miller_rabin_multi( x, T( 2 ),\
    \ T( 325 ), T( 9375 ), T( 28178 ), T( 450775 ), T( 9780504 ), T( 1795265022 )\
    \ );\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ T>::type isqrt( T const &x ){\n        assert( x >= T( 0 ) );\n        T ret\
    \ = static_cast<T>( sqrtl( x ) );\n        while( ret > 0 && ret * ret > x ) --ret;\n\
    \        while( x - ret * ret > 2 * ret ) ++ret;\n        return ret;\n    }\n\
    \ \n    template<typename T> typename enable_if<is_integral<T>::value, T>::type\
    \ icbrt( T const &x ){\n        assert( x >= T( 0 ) );\n        T ret = static_cast<T>(\
    \ cbrt( x ) );\n        while( ret > 0 && ret * ret * ret > x) --ret;\n      \
    \  while( x - ret * ret * ret > 3 * ret * ( ret + 1 ) ) ++ret;\n        return\
    \ ret;\n    }\n \n    /*uint64_t isqrt(unsigned __int128 const&x){\n        unsigned\
    \ __int128 ret = sqrtl(x);\n        while(ret>0 && ret*ret>x) --ret;\n       \
    \ while(x-ret*ret>2*ret)\n            ++ret;\n        return ret;\n    }*/\n \
    \   \n    vector<uint16_t> saved;\n    uint64_t squfof_iter_better( uint64_t const\
    \ &x, uint64_t const &k, uint64_t const &it_max, uint32_t cutoff_div ){\n    \
    \    if( __gcd( ( uint64_t ) k, x ) != 1) return __gcd( ( uint64_t ) k, x );\n\
    \        saved.clear();\n        uint64_t scaledn = k * x;\n        if( scaledn\
    \ >> 62 ) return 1;\n        uint32_t sqrtn = isqrt( scaledn );\n        uint32_t\
    \ cutoff = isqrt( 2 * sqrtn ) / cutoff_div;\n        uint32_t q0 = 1;\n      \
    \  uint32_t p1 = sqrtn;\n        uint32_t q1 = scaledn - p1 * p1;\n \n       \
    \ if( q1 == 0 ){\n            uint64_t factor = __gcd( x, ( uint64_t ) p1 );\n\
    \            return factor == x ? 1 : factor;\n        }\n \n        uint32_t\
    \ multiplier = 2 * k;\n        uint32_t coarse_cutoff = cutoff * multiplier;\n\
    \        \n        uint32_t i, j;\n        uint32_t p0 = 0;\n        uint32_t\
    \ sqrtq = 0;\n \n        for( i = 0; i < it_max; ++i ){\n            uint32_t\
    \ q, bits, tmp;\n \n            tmp = sqrtn + p1 - q1;\n            q = 1;\n \
    \           if ( tmp >= q1 )\n                q += tmp / q1;\n \n            p0\
    \ = q * q1 - p1;\n            q0 = q0 + ( p1 - p0 ) * q;\n \n            if (\
    \ q1 < coarse_cutoff ) {\n                tmp = q1 / __gcd( q1, multiplier );\n\
    \ \n                if ( tmp < cutoff ) {\n                    saved.push_back(\
    \ ( uint16_t ) tmp );\n                }\n            }\n \n            bits =\
    \ 0;\n            tmp = q0;\n            while( ! ( tmp & 1 ) ) {\n          \
    \      bits++;\n                tmp >>= 1;\n            }\n            if ( !\
    \ ( bits & 1 ) && ( ( tmp & 7 ) == 1) ) {\n                sqrtq = ( uint32_t\
    \ ) isqrt( q0 );\n \n                if ( sqrtq * sqrtq == q0 ) {\n          \
    \          for( j = 0; j < saved.size(); ++j ){\n                        if( saved[j]\
    \ == sqrtq ) \n                            break;\n                    }\n   \
    \                 if( j == saved.size() ) \n                        break;\n \
    \               }\n            }\n            tmp = sqrtn + p0 - q0;\n       \
    \     q = 1;\n            if ( tmp >= q0 )\n                q += tmp / q0;\n \n\
    \            p1 = q * q0 - p0;\n            q1 = q1 + ( p0 - p1 ) * q;\n \n  \
    \          if ( q0 < coarse_cutoff ) {\n                tmp = q0 / __gcd( q0,\
    \ multiplier );\n \n                if ( tmp < cutoff ) {\n                  \
    \  saved.push_back( ( uint16_t ) tmp );\n                }\n            }\n  \
    \      }\n \n        if( sqrtq == 1 ) { return 1; }\n        if( i == it_max )\
    \ { return 1; }\n \n        q0 = sqrtq;\n        p1 = p0 + sqrtq * ( ( sqrtn -\
    \ p0 ) / sqrtq );\n        q1 = ( scaledn - ( uint64_t ) p1 * ( uint64_t ) p1\
    \ ) / ( uint64_t ) q0;\n \n        for( j = 0; j < it_max; ++j ) {\n         \
    \   uint32_t q, tmp;\n \n            tmp = sqrtn + p1 - q1;\n            q = 1;\n\
    \            if ( tmp >= q1 )\n                q += tmp / q1;\n \n           \
    \ p0 = q * q1 - p1;\n            q0 = q0 + ( p1 - p0 ) * q;\n \n            if\
    \ ( p0 == p1 ) {\n                q0 = q1;\n                break;\n         \
    \   }\n \n            tmp = sqrtn + p0 - q0;\n            q = 1;\n           \
    \ if ( tmp >= q0 )\n                q += tmp / q0;\n \n            p1 = q * q0\
    \ - p0;\n            q1 = q1 + ( p0 - p1 ) * q;\n \n            if ( p0 == p1\
    \ )\n                break;\n        }\n \n        uint64_t factor = __gcd( (\
    \ uint64_t ) q0, x );\n        if( factor == x ) factor = 1;\n        return factor;\n\
    \    }\n \n    uint64_t squfof( uint64_t const &x ){\n        static array<uint32_t,\
    \ 16> multipliers { 1, 3, 5, 7, 11, 3 * 5, 3 * 7, 3 * 11, 5 * 7, \n          \
    \                                      5 * 11, 7 * 11, 3 * 5 * 7, 3 * 5 * 11,\
    \ 3 * 7 * 11, 5 * 7 * 11, 3 * 5 * 7 * 11 };\n \n        uint64_t cbrt_x = icbrt(\
    \ x );\n        if( cbrt_x*cbrt_x*cbrt_x == x ) return cbrt_x;\n \n        uint32_t\
    \ iter_lim = 300;\n        for( uint32_t iter_fact = 1; iter_fact < 20000; iter_fact\
    \ *= 4 ){\n            for( uint32_t const &k : multipliers ){\n             \
    \   if( numeric_limits<uint64_t>::max() / k <=x ) continue; \n               \
    \ uint32_t const it_max = iter_fact * iter_lim;\n                uint64_t factor\
    \ = squfof_iter_better( x, k, it_max, 1 );\n                if( factor==1 || factor==x\
    \ ) continue;\n                return factor;\n            }\n        }\n    \
    \    return 1;\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ vector<T>>::type factorize_brute( T x ){\n        vector<T> ret;\n        while(\
    \ x % 2 == 0 ){\n            x /= 2;\n            ret.push_back(2);\n        }\n\
    \        \n        for( uint32_t i = 3; i * ( T ) i <= x;i += 2 ){\n         \
    \   while( x % i == 0 ){\n                x /= i;\n                ret.push_back(\
    \ i );\n            }\n        }\n \n        if( x > 1 ) ret.push_back(x);\n \
    \       return ret;\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ vector<T>>::type factorize( T x ) {\n        vector<T> ret;\n        const uint32_t\
    \ trial_limit = 5000;\n        auto trial = [&]( uint32_t const &i ){\n      \
    \      while( x % i == 0 ){\n                x /= i;\n                ret.push_back(\
    \ i );\n            }\n        };\n        trial( 2 );\n        trial( 3 );\n\
    \        for( uint32_t i = 5,  j = 2; i < trial_limit && i * i <= x; i += j, j\
    \ = 6-j ){\n            trial( i );\n        }\n        \n        if( x > 1 ){\n\
    \            static stack<T> s;\n            s.push( x );\n            while(\
    \ !s.empty() ){\n                x = s.top(); s.pop();\n                if( !miller_rabin(\
    \ x ) ){\n                    T factor = squfof( x );\n                    if(\
    \ factor == 1 || factor == x ){ assert( 0 ); return ret; }\n                 \
    \   s.push( factor );\n                    s.push( x / factor );\n           \
    \     } else {\n                    ret.push_back( x );\n                }\n \
    \           }\n        }\n        sort( ret.begin(), ret.end() );\n        return\
    \ ret;\n    }\n}\n vector<long long>factorize(long long n){\n    return nt::factorize(n);\n\
    \ }\n  vector<long long> get_divs( long long n ){\n    vector<long long> pr =\
    \ nt::factorize( n );\n    vector<pair<long long, int>> primes;\n    for( int\
    \ i = 0; i < pr.size(); ){\n        long long x = pr[i];\n        int k = 0;\n\
    \        while( i < pr.size() && pr[i] == x ){\n            k++;\n           \
    \ i++;\n        }\n        primes.push_back( { x, k } );\n    }\n \n    vector<long\
    \ long> divs;\n    divs.push_back( 1 );\n    for( int i = 0; i < primes.size();\
    \ i++ ){\n        int size = divs.size();\n        long long p_pow = 1;\n    \
    \    for( int j = 0; j < primes[i].second; j++ ){\n            p_pow *= primes[i].first;\n\
    \            for( int i = 0; i < size; i++ ){\n                divs.push_back(\
    \ divs[i] * p_pow );\n            }\n        }\n    }\n \n    return divs;\n}\n"
  code: "#pragma once\n\nnamespace nt {\n    template<typename T> struct bigger_type\
    \ { };\n    template<typename T> using bigger_type_t = typename bigger_type<T>::type;\n\
    \    template<> struct bigger_type<int> { using type = long long; };\n    template<>\
    \ struct bigger_type<unsigned int>{ using type = unsigned long long; };\n    //template<>\
    \ struct bigger_type<int64_t>{using type = __int128;};\n    //template<> struct\
    \ bigger_type<uint64_t>{using type = unsigned __int128;};\n \n    template<typename\
    \ int_t = unsigned long long> struct mod_int {\n        static inline int_t add(\
    \ int_t const &a, int_t const &b, int_t const &mod ){\n            int_t ret =\
    \ a + b;\n            if( ret >= mod ) ret -= mod;\n            return ret;\n\
    \        }\n \n        static inline int_t sub( int_t const &a, int_t const &b,\
    \ int_t const &mod ){\n            return add( a, mod - b );\n        }\n \n \
    \       static inline int_t mul( int_t const &a, int_t const &b, int_t const &mod\
    \ ){\n            uint64_t ret = a * ( uint64_t ) b - ( uint64_t ) ( ( long double\
    \ ) a * b / mod - 1.1 ) * mod;\n            if( -ret < ret ){\n              \
    \  ret = mod - 1 - ( -ret - 1 ) % mod;\n            } else {\n               \
    \ ret %= mod;\n            }\t\t\t\t\n            int64_t out = ret;\n       \
    \     return out;\n        }\n \n        static inline int_t pow( int_t const\
    \ &a, int_t const &b, int_t const &mod ){\n            int_t ret = 1;\n      \
    \      int_t base = a;\n            for( int i = 0; b >> i; ++i ){\n         \
    \       if( ( b >> i ) & 1 ) ret = mul( ret, base, mod );\n                base\
    \ = mul( base, base, mod );\n            }\n            return ret;\n        }\n\
    \ \n    };\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ bool>::type is_prime( T x ){\n        if( x < T( 4 ) ) return x > T( 1 );\n\
    \        for( T i = 2; i * i <= x; ++i ){\n            if( x % i == 0 ) \n   \
    \             return false;\n        }\n        return true;\n    }\n \n    template<typename\
    \ T> typename enable_if<is_integral<T>::value, bool>::type miller_rabin_single(T\
    \ const&x, T base){\n        if( x < T( 4 ) ) return x > T( 1 );\n        if(\
    \ x % 2 == 0 ) return false;\n        base %= x;\n        if( base == 0 ) return\
    \ true;\n \n        T xm1 = x - 1;\n        int j = 1;\n        T d = xm1 / 2;\n\
    \        while( d % 2 == 0 ){ // could use __builtin_ctz\n            d /= 2;\n\
    \            ++j;\n        }\n \n        T t = mod_int<T>::pow( base, d, x );\n\
    \        if( t == T( 1 ) || t == T( xm1 ) ) return true;\n        for( int k =\
    \ 1; k < j; ++k ){\n            t = mod_int<T>::mul( t, t, x );\n            if(\
    \ t == xm1 ) return true;\n            if( t <= 1 ) break;\n        }\n      \
    \  return false;\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ bool>::type miller_rabin_multi( T const& ){ return true; }\n    template<typename\
    \ T, typename... S> \n    typename enable_if<is_integral<T>::value, bool>::type\
    \ miller_rabin_multi( T const &x, T const &base, S const &...bases ){\n      \
    \  if( !miller_rabin_single( x, base ) ) return false;\n        return miller_rabin_multi(\
    \ x, bases... );\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ bool>::type miller_rabin( T const&x ){\n        if( x < 316349281 ) return miller_rabin_multi(\
    \ x, T( 11000544 ), T( 31481107 ) );\n        if( x < 4759123141ull ) return miller_rabin_multi(\
    \ x, T( 2 ), T( 7 ), T( 61 ) );\n        return miller_rabin_multi( x, T( 2 ),\
    \ T( 325 ), T( 9375 ), T( 28178 ), T( 450775 ), T( 9780504 ), T( 1795265022 )\
    \ );\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ T>::type isqrt( T const &x ){\n        assert( x >= T( 0 ) );\n        T ret\
    \ = static_cast<T>( sqrtl( x ) );\n        while( ret > 0 && ret * ret > x ) --ret;\n\
    \        while( x - ret * ret > 2 * ret ) ++ret;\n        return ret;\n    }\n\
    \ \n    template<typename T> typename enable_if<is_integral<T>::value, T>::type\
    \ icbrt( T const &x ){\n        assert( x >= T( 0 ) );\n        T ret = static_cast<T>(\
    \ cbrt( x ) );\n        while( ret > 0 && ret * ret * ret > x) --ret;\n      \
    \  while( x - ret * ret * ret > 3 * ret * ( ret + 1 ) ) ++ret;\n        return\
    \ ret;\n    }\n \n    /*uint64_t isqrt(unsigned __int128 const&x){\n        unsigned\
    \ __int128 ret = sqrtl(x);\n        while(ret>0 && ret*ret>x) --ret;\n       \
    \ while(x-ret*ret>2*ret)\n            ++ret;\n        return ret;\n    }*/\n \
    \   \n    vector<uint16_t> saved;\n    uint64_t squfof_iter_better( uint64_t const\
    \ &x, uint64_t const &k, uint64_t const &it_max, uint32_t cutoff_div ){\n    \
    \    if( __gcd( ( uint64_t ) k, x ) != 1) return __gcd( ( uint64_t ) k, x );\n\
    \        saved.clear();\n        uint64_t scaledn = k * x;\n        if( scaledn\
    \ >> 62 ) return 1;\n        uint32_t sqrtn = isqrt( scaledn );\n        uint32_t\
    \ cutoff = isqrt( 2 * sqrtn ) / cutoff_div;\n        uint32_t q0 = 1;\n      \
    \  uint32_t p1 = sqrtn;\n        uint32_t q1 = scaledn - p1 * p1;\n \n       \
    \ if( q1 == 0 ){\n            uint64_t factor = __gcd( x, ( uint64_t ) p1 );\n\
    \            return factor == x ? 1 : factor;\n        }\n \n        uint32_t\
    \ multiplier = 2 * k;\n        uint32_t coarse_cutoff = cutoff * multiplier;\n\
    \        \n        uint32_t i, j;\n        uint32_t p0 = 0;\n        uint32_t\
    \ sqrtq = 0;\n \n        for( i = 0; i < it_max; ++i ){\n            uint32_t\
    \ q, bits, tmp;\n \n            tmp = sqrtn + p1 - q1;\n            q = 1;\n \
    \           if ( tmp >= q1 )\n                q += tmp / q1;\n \n            p0\
    \ = q * q1 - p1;\n            q0 = q0 + ( p1 - p0 ) * q;\n \n            if (\
    \ q1 < coarse_cutoff ) {\n                tmp = q1 / __gcd( q1, multiplier );\n\
    \ \n                if ( tmp < cutoff ) {\n                    saved.push_back(\
    \ ( uint16_t ) tmp );\n                }\n            }\n \n            bits =\
    \ 0;\n            tmp = q0;\n            while( ! ( tmp & 1 ) ) {\n          \
    \      bits++;\n                tmp >>= 1;\n            }\n            if ( !\
    \ ( bits & 1 ) && ( ( tmp & 7 ) == 1) ) {\n                sqrtq = ( uint32_t\
    \ ) isqrt( q0 );\n \n                if ( sqrtq * sqrtq == q0 ) {\n          \
    \          for( j = 0; j < saved.size(); ++j ){\n                        if( saved[j]\
    \ == sqrtq ) \n                            break;\n                    }\n   \
    \                 if( j == saved.size() ) \n                        break;\n \
    \               }\n            }\n            tmp = sqrtn + p0 - q0;\n       \
    \     q = 1;\n            if ( tmp >= q0 )\n                q += tmp / q0;\n \n\
    \            p1 = q * q0 - p0;\n            q1 = q1 + ( p0 - p1 ) * q;\n \n  \
    \          if ( q0 < coarse_cutoff ) {\n                tmp = q0 / __gcd( q0,\
    \ multiplier );\n \n                if ( tmp < cutoff ) {\n                  \
    \  saved.push_back( ( uint16_t ) tmp );\n                }\n            }\n  \
    \      }\n \n        if( sqrtq == 1 ) { return 1; }\n        if( i == it_max )\
    \ { return 1; }\n \n        q0 = sqrtq;\n        p1 = p0 + sqrtq * ( ( sqrtn -\
    \ p0 ) / sqrtq );\n        q1 = ( scaledn - ( uint64_t ) p1 * ( uint64_t ) p1\
    \ ) / ( uint64_t ) q0;\n \n        for( j = 0; j < it_max; ++j ) {\n         \
    \   uint32_t q, tmp;\n \n            tmp = sqrtn + p1 - q1;\n            q = 1;\n\
    \            if ( tmp >= q1 )\n                q += tmp / q1;\n \n           \
    \ p0 = q * q1 - p1;\n            q0 = q0 + ( p1 - p0 ) * q;\n \n            if\
    \ ( p0 == p1 ) {\n                q0 = q1;\n                break;\n         \
    \   }\n \n            tmp = sqrtn + p0 - q0;\n            q = 1;\n           \
    \ if ( tmp >= q0 )\n                q += tmp / q0;\n \n            p1 = q * q0\
    \ - p0;\n            q1 = q1 + ( p0 - p1 ) * q;\n \n            if ( p0 == p1\
    \ )\n                break;\n        }\n \n        uint64_t factor = __gcd( (\
    \ uint64_t ) q0, x );\n        if( factor == x ) factor = 1;\n        return factor;\n\
    \    }\n \n    uint64_t squfof( uint64_t const &x ){\n        static array<uint32_t,\
    \ 16> multipliers { 1, 3, 5, 7, 11, 3 * 5, 3 * 7, 3 * 11, 5 * 7, \n          \
    \                                      5 * 11, 7 * 11, 3 * 5 * 7, 3 * 5 * 11,\
    \ 3 * 7 * 11, 5 * 7 * 11, 3 * 5 * 7 * 11 };\n \n        uint64_t cbrt_x = icbrt(\
    \ x );\n        if( cbrt_x*cbrt_x*cbrt_x == x ) return cbrt_x;\n \n        uint32_t\
    \ iter_lim = 300;\n        for( uint32_t iter_fact = 1; iter_fact < 20000; iter_fact\
    \ *= 4 ){\n            for( uint32_t const &k : multipliers ){\n             \
    \   if( numeric_limits<uint64_t>::max() / k <=x ) continue; \n               \
    \ uint32_t const it_max = iter_fact * iter_lim;\n                uint64_t factor\
    \ = squfof_iter_better( x, k, it_max, 1 );\n                if( factor==1 || factor==x\
    \ ) continue;\n                return factor;\n            }\n        }\n    \
    \    return 1;\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ vector<T>>::type factorize_brute( T x ){\n        vector<T> ret;\n        while(\
    \ x % 2 == 0 ){\n            x /= 2;\n            ret.push_back(2);\n        }\n\
    \        \n        for( uint32_t i = 3; i * ( T ) i <= x;i += 2 ){\n         \
    \   while( x % i == 0 ){\n                x /= i;\n                ret.push_back(\
    \ i );\n            }\n        }\n \n        if( x > 1 ) ret.push_back(x);\n \
    \       return ret;\n    }\n \n    template<typename T> typename enable_if<is_integral<T>::value,\
    \ vector<T>>::type factorize( T x ) {\n        vector<T> ret;\n        const uint32_t\
    \ trial_limit = 5000;\n        auto trial = [&]( uint32_t const &i ){\n      \
    \      while( x % i == 0 ){\n                x /= i;\n                ret.push_back(\
    \ i );\n            }\n        };\n        trial( 2 );\n        trial( 3 );\n\
    \        for( uint32_t i = 5,  j = 2; i < trial_limit && i * i <= x; i += j, j\
    \ = 6-j ){\n            trial( i );\n        }\n        \n        if( x > 1 ){\n\
    \            static stack<T> s;\n            s.push( x );\n            while(\
    \ !s.empty() ){\n                x = s.top(); s.pop();\n                if( !miller_rabin(\
    \ x ) ){\n                    T factor = squfof( x );\n                    if(\
    \ factor == 1 || factor == x ){ assert( 0 ); return ret; }\n                 \
    \   s.push( factor );\n                    s.push( x / factor );\n           \
    \     } else {\n                    ret.push_back( x );\n                }\n \
    \           }\n        }\n        sort( ret.begin(), ret.end() );\n        return\
    \ ret;\n    }\n}\n vector<long long>factorize(long long n){\n    return nt::factorize(n);\n\
    \ }\n  vector<long long> get_divs( long long n ){\n    vector<long long> pr =\
    \ nt::factorize( n );\n    vector<pair<long long, int>> primes;\n    for( int\
    \ i = 0; i < pr.size(); ){\n        long long x = pr[i];\n        int k = 0;\n\
    \        while( i < pr.size() && pr[i] == x ){\n            k++;\n           \
    \ i++;\n        }\n        primes.push_back( { x, k } );\n    }\n \n    vector<long\
    \ long> divs;\n    divs.push_back( 1 );\n    for( int i = 0; i < primes.size();\
    \ i++ ){\n        int size = divs.size();\n        long long p_pow = 1;\n    \
    \    for( int j = 0; j < primes[i].second; j++ ){\n            p_pow *= primes[i].first;\n\
    \            for( int i = 0; i < size; i++ ){\n                divs.push_back(\
    \ divs[i] * p_pow );\n            }\n        }\n    }\n \n    return divs;\n}"
  dependsOn: []
  isVerificationFile: false
  path: nt/division.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: nt/division.hpp
layout: document
redirect_from:
- /library/nt/division.hpp
- /library/nt/division.hpp.html
title: nt/division.hpp
---
