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

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    if (even > 1) {
        int x, y;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                if (flag == 1) {
                    y = a[i];
                    break;
                }
                if (flag == 0) {
                    x = a[i];
                    flag = 1;
                }
            }
        }
        cout << x << " " << y << "\n";
        return;
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if ((a[j] % a[i]) % 2 == 0) {
                    cout << a[i] << " " << a[j] << "\n";
                    return;
                }
            }
        }
        cout << "-1\n";
        return;
    }
}

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}