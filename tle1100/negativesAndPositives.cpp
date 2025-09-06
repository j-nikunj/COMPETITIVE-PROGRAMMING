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
    vi a(n);
    int sum = 0;
    int neg = 0;
    int isZero = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += abs(a[i]);
        if (a[i] < 0) neg++;
        else if (a[i] == 0) isZero = 1;
        mini = min(mini, abs(a[i]));
    }
    if (isZero == 1) cout << sum << "\n";
    else if (neg % 2 == 1) cout << sum - 2 * mini << "\n";
    else cout << sum << "\n";
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