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

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vi a(n+1);
        vi pf(n+1);
        pf[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] <= q) pf[i] = pf[i-1] + 1;
            else pf[i] = 0;
        }
        int ans = 0;
        int j = 1;
        for (int i = 1; i <= n; i++) {
            if (pf[i] >= k) {
                ans += j;
                j++;
            }
            else j = 1;
        }
        cout << ans << endl;
    }

    return 0;
}