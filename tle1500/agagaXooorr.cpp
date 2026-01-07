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
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xorr = xorr ^ a[i];
    }
    if (xorr == 0) cout << "YES\n";
    else {
        int count = 0;
        int xorr2 = 0;
        for (int i = 0; i < n; i++) {
            xorr2 = xorr2 ^ a[i];
            if (xorr2 == xorr) {
                count++;
                xorr2 = 0;
            }
        }
        if (count > 2) cout << "YES\n";
        else cout << "NO\n";
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