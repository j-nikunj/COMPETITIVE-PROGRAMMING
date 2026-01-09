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
    string s, t;
    cin >> s >> t;
    vector<int> count(256, 0);
    for (char c : t) count[c]++;
    string temp = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        if (count[s[i]] > 0) {
            count[s[i]]--;
            temp += s[i];
        }
    }
    reverse(temp.begin(), temp.end());
    if (temp == t) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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