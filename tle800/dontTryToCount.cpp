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
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int k;
        if (m / n == 0) k = 0;
        else k = log(m/n) / log(2);
        for (int i = 0; i < k; i++) {
            x = x + x;
        }
        if (x.find(s) != string::npos) {
            cout << k << endl;
        }
        else {
            k++;
            x = x + x;
            if (x.find(s) != string::npos) {
                cout << k << endl;
            }
            else {
                k++;
                x = x + x;
                if (x.find(s) != string::npos) {
                    cout << k << endl;
                }
                else cout << "-1" << endl;
            }
        }
    }

    return 0;
}