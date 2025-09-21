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
    int n, m;
    cin >> n >> m;
    vector<vi> temp(m + 1);
    for (int i = 1; i <= n; ++i) {
        int l;
        cin >> l;
        for (int j = 0; j < l; ++j) {
            int x;
            cin >> x;
            temp[x].push_back(i);
        }
    }
    for (int j = 1; j <= m; ++j) {
        if (temp[j].empty()) {
            cout << "NO" << endl;
            return;
        }
    }
    vector<bool> isPos(n + 1, false);
    for (int j = 1; j <= m; ++j) {
        if (temp[j].size() == 1) {
            isPos[temp[j][0]] = true;
        }
    }
    int nott = 0;
    for (int i = 1; i <= n; ++i) {
        if (!isPos[i]) {
            nott++;
        }
    }
    if (nott >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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