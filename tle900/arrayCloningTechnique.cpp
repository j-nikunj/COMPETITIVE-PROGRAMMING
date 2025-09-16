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
    map<int, int> hsh;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        hsh[a[i]]++;
    }
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        maxCount = max(maxCount, hsh[a[i]]);
    }
    
    int x = maxCount;
    int y = n - x;
    int ans = y;
    if (y == 0) cout << "0\n";
    else {
        while (y > 0) {
            y -= x;
            x = 2 * x;
            ans++;
        }
        cout << ans << "\n";
    }
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