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
    vi a(n + 1);
    map<int, int> act;
    vi vals;
    for (int i = 1; i <= n; ++i) {
        vals.pb(i);
    }
    
    int preB = 0;
    for (int i = 1; i <= n; ++i) {
        int curB;
        cin >> curB;
        int p = i - (curB - preB);
        
        if (p == 0) {
            int val = vals.back();
            vals.pop_back();
            a[i] = val;
            act[i] = val;
        }
        else {
            int val = act[p];
            a[i] = val;
            act.erase(p);
            act[i] = val;
        }
        
        preB = curB;
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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