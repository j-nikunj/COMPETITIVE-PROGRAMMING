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
    int n, l, r;
    cin >> n >> l >> r;
    vi arr;
    for (int i = 1; i <= n; i++) {
        int temp = ((l-1) / i + 1) * i;
        if (temp > r) {
            cout << "no\n";
            return;
        }
        else {
            arr.push_back(temp);
        }
    }
    cout << "yes\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
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