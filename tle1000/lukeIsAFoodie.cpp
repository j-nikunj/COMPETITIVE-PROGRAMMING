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

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mini = a[0];
        int maxi = a[0];
        int count = 0;
        for (int i = 0; i < n; i++) {
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
            if (maxi - mini > 2 * x) {
                count++;
                mini = a[i];
                maxi = a[i];
            }
        }
        cout << count << "\n";
    }

    return 0;
}