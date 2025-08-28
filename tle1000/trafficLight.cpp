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
        char c;
        string s;
        cin >> n >> c;
        cin >> s;
        s = s + s;
        int ans = -1;
        if (c == 'g') {
            cout << "0\n";
            continue;
        }
        int l = 0, r = 0;
        while (r < 2 * n) {
            if (s[l] == c) {
                r++;
                if (s[r] == 'g') {
                    ans = max(ans, r - l);
                    l = r;
                }
            }
            else {
                l++;
                r++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}