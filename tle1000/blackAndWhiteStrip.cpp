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
    int n, k;
    cin >> n >> k;
    char s[n+1];
    vi b(n+1, 0);
    for (int i = 1; i < n+1; i++) {
        cin >> s[i];
        if (s[i] == 'B') b[i] = b[i-1] + 1;
        else b[i] = b[i-1];
    }
    int maxi = INT_MIN;
    for (int i = 1; i <= n - k + 1; i++) {
        int temp = b[k + i -1] - b[i - 1];
        maxi = max(maxi, temp);
    }
    cout << k - maxi << endl;
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