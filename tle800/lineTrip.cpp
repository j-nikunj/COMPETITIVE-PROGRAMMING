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

int32_t main() {
    fast_io

    int t = 1;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vi a(n+1);
        a[0] = 0;
        for (int i = 1; i < n+1; i++) {
            cin >> a[i];
        }
        int gap = 0;
        for (int i = 1; i < n+1; i++) {
            int diff = a[i] - a[i - 1];
            gap = max(gap, diff);
        }
        gap = max(gap, 2 * (x - a[n]));
        cout << gap << endl;
    }

    return 0;
}