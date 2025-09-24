#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define F first
#define S second
#define endl '\n'

typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
    int n, c;
    cin >> n >> c;
    vi s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int w = 0;
    int l = 1;
    int r = 1e9;
    while (l <= r) {
        w = (l + r) / 2;
        int area = 0;
        for (int i = 0; i < n; i++) {
            area += (s[i] + 2 * w) * ( s[i] + 2 * w);
            if (area > c) break;
        }
        if (area == c) {
            cout << w << endl;
            return;
        }
        else if (area < c) {
            l = w + 1;
        }
        else {
            r = w - 1;
        }
    }
    return;
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