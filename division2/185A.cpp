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
    if (n == 1) cout << "1\n";
    else if (n == 2) cout << "9\n";
    else if (n == 3) cout << "29\n";
    else if (n == 4) cout << "56\n";
    else {
        cout << 5 * (n * n - 1 - n) << "\n";
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