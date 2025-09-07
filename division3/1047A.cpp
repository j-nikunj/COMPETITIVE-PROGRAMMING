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

void solve() {
    int k, x;
    cin >> k >> x;
    int i = 1;
    while (true) {
        int temp = i;
        for (int j = 0; j < k; j++) {
            if (temp % 2 == 0) temp = temp / 2;
            else {
                temp = 3 * temp + 1;
            }
        }
        if (temp == x) {
            cout << i << "\n";
            return;
        }
        i++;
    }
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