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
        int n;
        cin >> n;
        vi a(n);
        cin >> a[0];
        int minGap = INT_MAX;
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            minGap = min(minGap, a[i] - a[i-1]);
        }
        if (!is_sorted(all(a))) cout << "0\n";
        else cout << minGap / 2 + 1 << "\n";
    }

    return 0;
}