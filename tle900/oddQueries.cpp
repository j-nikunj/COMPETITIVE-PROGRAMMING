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
        int n, q;
        cin >> n >> q;
        vi a(n+1);
        a[0] = 0;
        vi pf(n + 1, 0);
        for (int i = 1; i < n+1; i++) {
            cin >> a[i];
            pf[i] = pf[i - 1] + a[i];
        }
        
        for (int i = 0; i < q; i++){
            int l, r, k;
            cin >> l >> r >> k;
            int oldSegmentSum = pf[r] - pf[l-1];
            int newSum = pf[n] - oldSegmentSum + (r - l + 1) * k;
            
            if (newSum % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}