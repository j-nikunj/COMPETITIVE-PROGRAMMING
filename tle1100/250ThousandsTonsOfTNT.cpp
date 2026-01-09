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
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = -1;
    for (int d = 1; d <= n; d++) {
        if (n % d == 0) {
            int mx = -1e18, mn = 1e18;
            for (int i = 0; i < n; i += d) {
                int sum = 0;
                for (int j = i; j < i + d; ++j) {
                    sum += a[j];
                }
                mx = max(mx, sum);
                mn = min(mn, sum);
            }
            ans = max(ans, mx - mn);
        }
    }
    cout << ans << '\n';
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