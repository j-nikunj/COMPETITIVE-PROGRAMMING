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
    int x, y;
    if (n % 2 == 0) {
        cout << "-1\n";
        return;
    }
    if (n % 4 == 0) y = n / 4;
    if (n % 6 == 0) x = n / 6;
    
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