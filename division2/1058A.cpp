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
    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        counts[a]++;
    }

    vi zeros;
    for (int i = 0; i <= n + 1; ++i) {
        if (counts.find(i) == counts.end()) {
            zeros.push_back(i);
        }
    }

    int mini = -1;
    for (int k = 1; k <= n; ++k) {
        int mex = 0;
        while (counts.count(mex) && counts[mex] >= k) {
            mex++;
        }
        if (!zeros.empty() && zeros[0] <= mex) {
            int score = zeros[0];
            if (mini == -1 || score < mini) {
                mini = score;
            }
        }
    }
    if (mini == -1) {
        mini = zeros[0];
    }
    else {
        mini = min(mini, zeros[0]);
    }
    cout << mini << "\n";
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