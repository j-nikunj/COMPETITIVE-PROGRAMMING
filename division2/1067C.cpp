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
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vi L(n);
    L[0] = a[0];
    for (int i = 1; i < n; i++) {
        L[i] = max(a[i], a[i] + L[i-1]);
    }
    vi R(n);
    R[n-1] = a[n-1];
    for (int i = n - 2; i >= 0; --i) {
        R[i] = max(a[i], a[i] + R[i+1]);
    }
    
    int ans = -2e18;
    for (int val : L) {
        ans = max(ans, val);
    }

    if (k % 2 == 0) {
        cout << ans << "\n";
    } 
    else {
        int temp = ans;
        for (int i = 0; i < n; i++) {
            int sum = L[i] + R[i] + b[i] - a[i];
            temp = max(temp, sum);
        }
        cout << temp << "\n";
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