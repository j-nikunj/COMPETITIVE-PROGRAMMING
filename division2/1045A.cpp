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
        int n, a, b;
        cin >> n >> a >> b;
        if (n%2) {
            if (b % 2 == 1 && a % 2 == 1) cout << "yes\n";
            else {
                if (b % 2 == 1 && a < b) {
                    cout << "yes\n";
                }
                else cout << "no\n";
            } 
        } 
        else {
            if (b % 2 == 0 && a % 2 == 0) cout << "yes\n";
            else {
                if (b % 2 == 0 && a < b) {
                    cout << "yes\n";
                }
                else cout << "no\n";
            } 
        }
    }

    return 0;
}