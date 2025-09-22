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
    string s;
    cin >> s;
    s = s + s;
    int k = 0, z = 0;
    for (char c : s) {
        z = c == '1' ? z+1 : 0;
        k = max(k, z);
    }
    int n = s.size() / 2;
    if (k > n) {
        cout << n*n << '\n';
    } else 
    {
        int side_a = (k+1)/2;
        int side_b = (k+2)/2;
        cout << side_a * side_b << '\n';
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