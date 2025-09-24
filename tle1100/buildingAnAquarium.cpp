#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define F first
#define S second

typedef vector<int> vi;
typedef pair<int, int> pii;

int water(vi a, int mid) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (mid - a[i] >= 0) {
            sum = sum + (mid - a[i]);
        }
    }
    return sum;
}

void solve() {
    int n, x;
    cin >> n >> x;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = *min_element(all(a));
    int r = x + l;
    int ans = 0;
    while (l <= r) {
        int mid = (r + l) / 2;
        if (water(a, mid) <= x) {
            l = mid + 1;
            ans = mid;
        }
        else {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
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