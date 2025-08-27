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
        vi a(n);
        cin >> a[0] >> a[1];
        vi oddPf;
        vi evenPf;
        oddPf.push_back(a[0]);
        evenPf.push_back(a[1]);
        for (int i = 2; i < n; i++) {
            cin >> a[i];
            if (i%2 == 0) {
                oddPf.push_back(oddPf.back() + a[i]);
            }
            else {
                evenPf.push_back(evenPf.back() + a[i]);
            }
        }
        
    }

    return 0;
}