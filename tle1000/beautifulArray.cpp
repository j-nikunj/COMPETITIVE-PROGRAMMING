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
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        if ((b > (k-1) * n) || ((s-b) % k != 0)) cout << "-1" << endl;
        else {
            int c = (s - b) / k;
            if (b >= k-1) {
                cout << c * b + (k-1) << " ";
                b -= k-1;
                n--;
            }
            else {
                cout << c * b + b << " ";
                b -= b;
                n--;
            }
            while (b >= k-1) {
                cout << k-1 << " ";
                b -= k-1;
                n--;
            }
            cout << b << " ";
            n--;
            while (n > 0) {
                cout << "0 ";
                n--;
            }
            cout << endl;
        }
    }

    return 0;
}