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
    int k;
    cin >> n >> k;
    vector<bool> has(k, false);
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < k) {
            has[x] = true;
        }
        else if (x == k) {
            count++;
        }
    }
    int count2 = 0;
    for (int i = 0; i < k; i++) {
        if (!has[i]) {
            count2++;
        }
    }
    cout << max(count2, count) << "\n";
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