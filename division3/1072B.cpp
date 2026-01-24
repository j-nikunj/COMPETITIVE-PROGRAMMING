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
#define endl '\n'

void solve() {
    int s, k, m;
    cin >> s >> k >> m;
    int sum = s;
    if ((sum <= k) && (m >= k)) m %= k;
    if (sum > k) {
        if (m % k == 0) {
            if ((m / k) % 2 == 0) {
                cout << sum << endl;
                return;
            }
            else {
                cout << k << endl;
                return;
            }
        }
        else {
            if ((m / k) % 2 == 0) {
                m %= k;
                cout << sum - m << endl;
                return;
            }
            else {
                m %= k;
                cout << k - m << endl;
                return;
            }
        }
    }
    else {
        if (m >= k) m %= k;
        else {
            if (m < sum) {
                cout << sum - m << endl;
                return;
            }
            else {
                cout << 0 << endl;
                return;
            }
        }
    }
    cout << sum << endl;
}

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}