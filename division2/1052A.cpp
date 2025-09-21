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
    vi count(n+1, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        hsh[a[i]]++;
        count[hsh[a[i]]]++;
    }
    int ans = 1;
    for (int i = 0; i < n+1; i++) {
        ans = max(ans, count[i] * i);
        // cout << count[i] << " ";
    }
    cout << ans << "\n";
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