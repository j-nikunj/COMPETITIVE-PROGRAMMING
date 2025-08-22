#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("Ofast,unroll-loops")
using namespace std;
using namespace __gnu_pbds;

template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define F first
#define S second

typedef vector<int> vi;
typedef pair<int, int> pii;

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pii> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].F;
            a[i].S = i;
        }
        sort(all(a));
        
    }

    return 0;
}