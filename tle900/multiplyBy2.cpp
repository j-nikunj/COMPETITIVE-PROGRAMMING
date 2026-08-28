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
    int n;
    cin >> n;
    int two = 0, three = 0;
    while (n % 2 == 0) {
        n /= 2;
        two++;
    }
    while (n % 3 == 0) {
        n /= 3;
        three++;
    }
    if (n == 1 && two <= three) cout << 2 * three - two << endl;
    else cout << -1 << endl;
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