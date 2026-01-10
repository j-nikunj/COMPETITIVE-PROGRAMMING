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
    int x, n;
    cin >> x >> n;
    int d;
    if (n % 4 == 1) d = -n;
    else if (n % 4 == 2) d = 1;
    else if (n % 4 == 3) d = n + 1;
    else d = 0;
    if (x & 1) cout << x - d << endl;
    else cout << x + d << endl;
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