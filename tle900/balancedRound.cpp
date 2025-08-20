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

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << "0" << endl;
            continue;
        }
        sort(all(a));
        int maxLen = -1;
        int len = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] <= k) {
                len++;
            }
            else {
                len=0;
            }
            maxLen = max(maxLen, len);
        }
        cout << n - maxLen - 1 << endl;
    }

    return 0;
}