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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d - b < c - a) cout << "-1\n";
    else {
        int temp = d - b;
        a = a + d - b;
        int ans = (a - c) + (temp);
        if (temp < 0) cout << "-1\n";
        else cout << ans << "\n";
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