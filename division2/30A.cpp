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
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }
    int x;
    cin >> x;
    if (x <= maxi && x >= mini) cout << "YES\n";
    else cout << "NO\n";
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