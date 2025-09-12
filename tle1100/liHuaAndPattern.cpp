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
    vector<vi> a;
    for (int i = 0; i < n; i++) {
        vi temp(n);
        for (int j = 0; j < n; j++) {
            cin >> temp[j];
        }
        a.push_back(temp);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[n-i-1LL][n-j-1LL]) count++;
        }
    }
    count = count / 2;
    if (count > k) cout << "NO\n";
    else {
        k = k - count;
        if (n%2) cout << "YES\n";
        else if (k%2) cout << "NO\n";
        else cout << "YES\n";
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