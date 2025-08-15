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
        int n, k, x;
        cin >> n >> k >> x;
        int maxSum = (k * (2 * n + 1 - k)) / 2;
        int minSum = (k * (k + 1)) / 2;
        if (x < minSum || x > maxSum) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}