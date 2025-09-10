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
    if (xorr == 0) cout << xorr << "\n";
    else if (n % 2 == 1) cout << xorr << "\n";
    else cout << "-1\n";
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