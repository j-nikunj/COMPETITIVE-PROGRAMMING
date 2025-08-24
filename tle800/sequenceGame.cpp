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
        vi b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vi a;
        a.push_back(b[0]);
        for (int i = 2; i < 2 * n; i++) {
            a.push_back(b[i/2]);
            if (b[i/2] >= b[i/2 - 1]) i++; 
        }
        cout << a.size() << "\n";
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}