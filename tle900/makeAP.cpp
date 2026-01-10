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
    int A, B, C;
    cin >> A >> B >> C;
    if ((A+C) % (2*B) == 0) cout << "YES\n";
    else if ((2*B-C) % A == 0 && 2*B - C > 0) cout << "YES\n";
    else if ((2*B-A) % C == 0 && 2*B - A > 0) cout << "YES\n";
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