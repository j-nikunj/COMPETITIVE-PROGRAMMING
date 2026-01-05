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
    for (int i = 0; i < n; i++) {
        cin >> a[i];   
    }

    if (n <= 1) {
        cout << 0 << endl;
        return;
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += abs(a[i] - a[i+1]);
    }
    int mini = sum - abs(a[0] - a[1]);
    mini = min(mini, sum - abs(a[n-2] - a[n-1]));
    for (int k = 1; k < n - 1; k++) {
        int curr = sum - abs(a[k-1] - a[k]) - abs(a[k] - a[k+1]) + abs(a[k-1] - a[k+1]);
        mini = min(mini, curr);
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