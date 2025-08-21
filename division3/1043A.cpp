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
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b;
        cin >> b;
        string c;
        cin >> c;
        for (int i = 0; i < c.size(); i++) {
            if(c[i] == 'D') {
                a = a + b[i];
            }
            else if (c[i] == 'V') {
                a = b[i] + a;
            }
        }
        cout << a << endl;
    }

    return 0;
}