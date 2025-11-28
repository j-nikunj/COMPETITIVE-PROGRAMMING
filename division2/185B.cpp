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
    vi b(n);
    int sum = 0;
    int nonZero = 0;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum += b[i];
        if (b[i] > 0) {
            nonZero++;
        }
    }
    int ans = min(nonZero, sum - n + 1);
    cout << ans << endl;
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