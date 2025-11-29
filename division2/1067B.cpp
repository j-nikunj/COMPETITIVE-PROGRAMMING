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
    int n;
    cin >> n;
    int m = 2 * n;
    vi hsh(m + 1, 0);
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        hsh[val]++;
    }
    int odd = 0;
    int even = 0;
    for (int c : hsh) {
        if (c == 0) continue;
        if (c % 2 != 0) odd++;
        else even++;
    }
    int ans = odd + 2 * even;
    if (odd == 0) {
        if (even % 2 != n % 2) {
            ans -= 2;
        }
    }
    cout << ans << "\n";
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