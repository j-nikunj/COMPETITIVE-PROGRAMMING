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
        map<int, int> hsh;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            hsh[a[i]]++;
        }
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (hsh[a[i]] > 1) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}