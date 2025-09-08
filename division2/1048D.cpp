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
    int n, q;
    cin >> n >> q;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vi pf(n, 0);
    if (n >= 3) {
        for (int i = 0; i < n-2; i++) {
            if (a[i] > a[i+1] && a[i+1] > a[i+2]) {
                pf[i] = 1;
            }
        }
        for (int i = 1; i < n; ++i) {
            pf[i] += pf[i - 1];
        }
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (r - l + 1 < 3) {
            cout << "YES\n";
            continue;
        }
        int start = l;
        int end = r - 2;
        int bad = pf[end];
        if (start > 0) bad -= pf[start-1];
        if (bad > 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
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