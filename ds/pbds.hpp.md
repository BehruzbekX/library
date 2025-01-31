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
  bundledCode: "#line 1 \"ds/pbds.hpp\"\n#include <ext/pb_ds/assoc_container.hpp>\r\
    \n#include <ext/pb_ds/tree_policy.hpp>\r\n#include <ext/pb_ds/tag_and_trait.hpp>\r\
    \nusing namespace __gnu_pbds;\r\n\r\ntemplate <typename KEY>\r\nusing pbds_set\
    \ = tree<KEY, null_type, less<KEY>, rb_tree_tag,\r\n                      tree_order_statistics_node_update>;\n"
  code: "#include <ext/pb_ds/assoc_container.hpp>\r\n#include <ext/pb_ds/tree_policy.hpp>\r\
    \n#include <ext/pb_ds/tag_and_trait.hpp>\r\nusing namespace __gnu_pbds;\r\n\r\n\
    template <typename KEY>\r\nusing pbds_set = tree<KEY, null_type, less<KEY>, rb_tree_tag,\r\
    \n                      tree_order_statistics_node_update>;"
  dependsOn: []
  isVerificationFile: false
  path: ds/pbds.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: ds/pbds.hpp
layout: document
redirect_from:
- /library/ds/pbds.hpp
- /library/ds/pbds.hpp.html
title: ds/pbds.hpp
---
