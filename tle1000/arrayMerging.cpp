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
        vi a(n), b(n);
        vi hash1(2 * n + 1), hash2(2 * n + 1);
        int temp = 1;
        cin >> a[0];
        hash1[a[0]] = 1;
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] == a[i-1]) {
                temp++;
                hash1[a[i]] = max(hash1[a[i]], temp);
            }
            else {
                temp = 1;
                hash1[a[i]] = max(hash1[a[i]], temp);
            }
        }

        cin >> b[0];
        hash2[b[0]] = 1;
        temp = 1;

        for (int i = 1; i < n; i++) {
            cin >> b[i];
            if (b[i] == b[i-1]) {
                temp++;
                hash2[b[i]] = max(hash2[b[i]], temp);
            }
            else {
                temp = 1;
                hash2[b[i]] = max(hash2[b[i]], temp);
            }
        }
        int maxSum = 0;
        for (int i = 1; i <= 2 * n; i++) {
            maxSum = max(maxSum, hash1[i] + hash2[i]);
        }
        cout << maxSum << endl;
    }

    return 0;
}