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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int zeros = 0, ones = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') zeros++;
            else ones++;
        }
        int maxPossible = zeros / 2 + ones / 2;
        int minPossible = abs(ones - zeros) / 2;
        if (minPossible <= k && k <= maxPossible) {
            if ((k - minPossible) % 2 == 0) cout << "yes\n";
            else cout << "no\n";
        }
        else cout << "no\n";
    }

    return 0;
}