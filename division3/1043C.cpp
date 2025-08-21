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

int expo(int x, int y) {
    int ans = 1;
    for (int i = 0; i < y; i++) {
        ans *= x;
    }
    return ans;
}

int32_t main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi power(25);
        power[0] = 1;
        vi cost(25);
        cost[0] = 3;
        for (int i = 1; i < 25; i++) {
            power[i] = 3 * power[i-1];
            cost[i] = expo(3, i+1) + i * expo(3, i-1);

        }
        int ans = 0;
        if (n % 3 == 2) {
            ans += 6;
            n = n - 2;
        }
        for (int i = 24; i >= 0; i--) {
            if (n - power[i] >= 0) {
                n = n - power[i];
                ans += cost[i];
                i++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}