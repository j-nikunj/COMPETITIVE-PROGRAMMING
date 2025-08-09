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
        string s;
        cin >> s;
        int dot = 0;
        int hash = 0;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                dot++;
                if (dot == 3) {
                    flag = 1;
                    break;
                }
            }
            if (s[i] == '#') {
                dot = 0;
                hash++;
            }
        }
        if (flag == 1) cout << "2" << endl;
        else cout << n - hash << endl;
    }

    return 0;
}