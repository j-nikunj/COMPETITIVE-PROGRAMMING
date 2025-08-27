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
        int n, k;
        cin >> n >> k;
        vi a(n);
        cin >> a[0];
        int gc = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            gc = __gcd(gc, a[i]);
        }
        if (gc > 1) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
        }
        else {
            int mini = *min_element(all(a));
            int flag = 0;
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] % mini != 0) {
                    a[i] += k;
                    count++;
                }
            }
        }

    }

    return 0;
}