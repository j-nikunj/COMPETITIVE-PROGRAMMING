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
        vi g(n);
        for (int i = 0; i < n; i++) {
            cin >> g[i];
        }
        
        sort(all(g));
        vi g2 = g;

        int emerald = 0;
        for (int i = 0; i < n-1; i++) {
            emerald += max(g[i], g[i+1]);
            int temp = min(g[i], g[i+1]);
            g[i] -= temp;
            g[i+1] -= temp;
            i++;
        }
        if (n % 2 != 0) {
            emerald += g[n-1];
            int emerald2 = g2[0];
            for (int i = 1; i < n-1; i++) {
                emerald2 += max(g2[i], g2[i+1]);
                int temp = min(g2[i], g2[i+1]);
                g2[i] -= temp;
                g2[i+1] -= temp;
                i++;
            }
            emerald = min(emerald, emerald2);
        }
        cout << emerald << "\n";
    }

    return 0;
}