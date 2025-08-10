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

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        vi b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int count = 1;
        int temp = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                count += (a[i] - b[i]);
            }
        }
        cout << count << endl;
    }

    return 0;
}