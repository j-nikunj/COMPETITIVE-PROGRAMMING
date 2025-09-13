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
    int n, k;
    cin >> n >> k;
    vi a(n);
    map<int, int> hsh;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        hsh[a[i]]++;
    }

    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        if (hsh[a[i]] % k != 0) {
            cout << "0\n";
            return;
        }
        counts[a[i]] = hsh[a[i]] / k;
    }

    int subarrays = 0;
    map<int, int> window;
    int l = 0;
    for (int r = 0; r < n; ++r) {
        int val = a[r];
        window[val]++;
        while (window[val] > counts[val]) {
            window[a[l]]--;
            l++;
        }
        subarrays += (r - l + 1);
    }
    cout << subarrays << "\n";
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