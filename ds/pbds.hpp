#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
using namespace __gnu_pbds;

template <typename KEY>
using pbds_set = tree<KEY, null_type, less<KEY>, rb_tree_tag,
                      tree_order_statistics_node_update>;