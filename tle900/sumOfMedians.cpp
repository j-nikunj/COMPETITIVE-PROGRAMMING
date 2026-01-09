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
    int n, k;
    cin >> k >> n;
    vi a(n * k + 1);
    for (int i = 1; i <= n*k; i++) {
        cin >> a[i];
    }
    int x = (k+1) / 2 - 1;
    x = k - x;
    int z = n * k + 1;
    int ans = 0;
    while (n--) {
        z -= x;
        if (z<=0) break;
        ans += a[z];
    }
    cout << ans << endl;
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