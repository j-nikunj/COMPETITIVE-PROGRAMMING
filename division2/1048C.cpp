#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define F first
#define S second

typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
    int k, x;
    cin >> k >> x;
    int p = __builtin_ctzll(x);
    int m = k - p;
    if (m <= 0) {
        cout << 0 << "\n";
        return;
    }
    
    cout << m << "\n";
    int s_val = ((x >> p) - 1) / 2;
    for (int i = 0; i < m; ++i) {
        if ((s_val >> i) & 1) {
            cout << 2 << (i == m - 1 ? "" : " ");
        }
        else {
            cout << 1 << (i == m - 1 ? "" : " ");
        }
    }
    cout << "\n";
}

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}