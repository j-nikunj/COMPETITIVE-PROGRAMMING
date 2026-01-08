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
    string s;
    cin >> s;
    int zero = 0;
    int one = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') zero++;
        else one++;
    }
    int round = min(one, zero);
    if (round & 1) cout << "DA\n";
    else cout << "NET\n";
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