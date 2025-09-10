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
    vi a(n);
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            count++;
            ans = max(ans, count);
        }
        else count = 0;
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