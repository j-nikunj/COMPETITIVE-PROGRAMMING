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
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(all(a));
        int first = count(all(a), a[0]);
        int second = count(all(a), a[n-1]);
        if (a[0] == a[n-1]) {
            cout << "YES\n";
        }
        else if (first + second == n) {
            if (n % 2 == 0 && (first == n/2) && (second == n/2)) cout << "YES" << endl;
            else if (n % 2 != 0 && (((first == n/2 + 1) && (second == n/2)) || (first == n/2) && (second == n/2 + 1))) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}