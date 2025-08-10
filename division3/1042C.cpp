#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> s;
    for (int i = 0; i < n; ++i) {
        long long s_val;
        cin >> s_val;
        long long rem = s_val % k;
        s.push_back(min(rem, k - rem));
    }

    vector<long long> t;
    for (int i = 0; i < n; ++i) {
        long long t_val;
        cin >> t_val;
        long long rem = t_val % k;
        t.push_back(min(rem, k - rem));
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}