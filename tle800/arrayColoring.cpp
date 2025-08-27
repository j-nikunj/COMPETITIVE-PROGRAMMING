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
        int odds = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2) odds++;
        }
        if (odds % 2) cout << "no\n";
        else cout << "yes\n";
    }

    return 0;
}