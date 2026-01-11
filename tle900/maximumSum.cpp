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
    int n, k;
    cin >> n >> k;
    vi a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(all(a));
    int left = 0, right = n - 1;
    int ans = INT_MIN;
    for (int i = 1; i <= k; i++) {
        int temp = a[right-i] + a[left+k-i] + a[left+k-i];
    }
    cout << sum << endl;
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