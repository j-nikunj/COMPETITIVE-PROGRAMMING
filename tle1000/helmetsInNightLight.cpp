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
        int n, p;
        cin >> n >> p;
        vector<pii> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].S;
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i].F;
        }
        sort(all(a));
        int cost = p;
        int j = 0;
        for (int i = 1; i < n; i++) {
            if (a[j].F < p) {
                if (j >= i) cost += p;
                else if (a[j].S > 0) {
                    cost += a[j].F;
                    a[j].S--;
                }
                else if (a[j].S <= 0) {
                    j++;
                    i--;
                }
            }
            else {
                cost += p;
            }
        }
        cout << cost << endl;
    }

    return 0;
}