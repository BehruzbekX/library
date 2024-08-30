---
data:
  libraryCategories:
  - name: ds/fenwick
    pages:
    - icon: ':heavy_check_mark:'
      path: ds/fenwick/fenwick.hpp
      title: ds/fenwick/fenwick.hpp
    - icon: ':heavy_check_mark:'
      path: ds/fenwick/rangefenwick.hpp
      title: ds/fenwick/rangefenwick.hpp
  - name: ds
    pages:
    - icon: ':warning:'
      path: ds/pbds.hpp
      title: ds/pbds.hpp
  - name: ds/segtree
    pages:
    - icon: ':warning:'
      path: ds/segtree/dynamicsegtree.hpp
      title: ds/segtree/dynamicsegtree.hpp
    - icon: ':heavy_check_mark:'
      path: ds/segtree/mergesorttree.hpp
      title: ds/segtree/mergesorttree.hpp
  - name: .
    pages:
    - icon: ':warning:'
      path: main.cpp
      title: main.cpp
    - icon: ':warning:'
      path: temp.cpp
      title: temp.cpp
    - icon: ':heavy_check_mark:'
      path: template.hpp
      title: template.hpp
  - name: monoid
    pages:
    - icon: ':heavy_check_mark:'
      path: monoid/add.hpp
      title: monoid/add.hpp
    - icon: ':heavy_check_mark:'
      path: monoid/gcd.hpp
      title: monoid/gcd.hpp
    - icon: ':heavy_check_mark:'
      path: monoid/max.hpp
      title: monoid/max.hpp
    - icon: ':heavy_check_mark:'
      path: monoid/min.hpp
      title: monoid/min.hpp
    - icon: ':heavy_check_mark:'
      path: monoid/xor.hpp
      title: monoid/xor.hpp
  - name: other
    pages:
    - icon: ':heavy_check_mark:'
      path: other/fastio.hpp
      title: other/fastio.hpp
  - name: prime
    pages:
    - icon: ':heavy_check_mark:'
      path: prime/miller.hpp
      title: prime/miller.hpp
  - name: random
    pages:
    - icon: ':heavy_check_mark:'
      path: random/base.hpp
      title: random/base.hpp
    - icon: ':heavy_check_mark:'
      path: random/shuffle.hpp
      title: random/shuffle.hpp
  - name: string
    pages:
    - icon: ':heavy_check_mark:'
      path: string/is_substring.hpp
      title: string/is_substring.hpp
    - icon: ':warning:'
      path: string/prefix_function.hpp
      title: string/prefix_function.hpp
    - icon: ':heavy_check_mark:'
      path: string/zalgorithm.hpp
      title: string/zalgorithm.hpp
  verificationCategories:
  - name: test/library_checker
    pages:
    - icon: ':heavy_check_mark:'
      path: test/library_checker/aplusb.test.cpp
      title: test/library_checker/aplusb.test.cpp
  - name: test/mytest
    pages:
    - icon: ':heavy_check_mark:'
      path: test/mytest/fenwickraq.test.cpp
      title: test/mytest/fenwickraq.test.cpp
    - icon: ':heavy_check_mark:'
      path: test/mytest/issubstring.test.cpp
      title: test/mytest/issubstring.test.cpp
layout: toppage
---
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dynamic Content</title>
    <style>
        body {
            font-family: Arial, sans-serif;
        }
        .dynamic-content {
            margin: 20px 0;
            padding: 10px;
            border: 1px solid #ddd;
            border-radius: 4px;
            background-color: #f9f9f9;
        }
    </style>
</head>
<body>
    <div class="dynamic-content" id="additional-content"></div>

    <script>
        document.addEventListener("DOMContentLoaded", function() {
            var contentDiv = document.getElementById('additional-content');
            contentDiv.innerHTML = `
                <h2>Additional Information</h2>
                <p>This is some extra content added dynamically.</p>
                <ul>
                    <li>Extra List Item 1</li>
                    <li>Extra List Item 2</li>
                </ul>
            `;
        });
    </script>
</body>
</html>
