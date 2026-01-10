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
    vi a(n), b(n);
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xorr = xorr ^ a[i];
    }
    int ind = -1;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        xorr = xorr ^ b[i];
        if (a[i] != b[i]) ind = i;
    }
    if (xorr == 0) ind = -1;
    if (ind == -1) cout << "Tie\n";
    else if (ind & 1) cout << "Mai\n";
    else cout << "Ajisai\n";
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