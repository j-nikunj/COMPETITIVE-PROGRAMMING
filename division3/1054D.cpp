#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define F first
#define S second
#define endl '\n'

typedef vector<int> vi;
typedef pair<int, int> pii;

int cost(const vi& nishant) {
    if (nishant.size() <= 1) return 0;
    vi c;
    for (int i = 0; i < nishant.size(); ++i) {
        c.push_back(nishant[i] - i);
    }
    int median = c[c.size() / 2];
    int total = 0;
    for (int val : c) {
        total += abs(val - median);
    }
    return total;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi a;
    vi b;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            a.push_back(i);
        } else {
            b.push_back(i);
        }
    }
    int costa = cost(a);
    int costb = cost(b);
    cout << min(costa, costb) << endl;
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