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
        int n;
        cin >> n;
        vi p(n+1);
        int minGap = 0;
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            int gap = abs(p[i] - i);
            if (gap == 0) continue;
            minGap = __gcd(minGap, gap);
        }
        cout << minGap << endl;
    }

    return 0;
}