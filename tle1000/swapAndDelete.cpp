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
        string s;
        cin >> s;
        int zeros = 0;
        int ones = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') zeros++;
            else ones++;
        }
        string sOld = s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' && ones > 0) {
                s[i] = '1';
                ones--;
            }
            else if (s[i] == '1' && zeros > 0) {
                s[i] = '0';
                zeros--;
            }
        }
        int cost = 0;
        
        int i = 0;
        while (i < s.size()) {
            if (s[i] == sOld[i]) {
                cost++;
                s.erase(i, 1);
                i--;
            }
            i++;
        }
        cout << cost << endl;
    }

    return 0;
}