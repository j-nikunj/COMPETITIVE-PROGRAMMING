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

// better approach with O(1)
void solve() {
    string n;
    cin >> n;
    int len = n.length();
    int first_digit = n[0] - '0';
    int ans = (len - 1) * 9 + first_digit;
    cout << ans << endl;
}

bool roundd(int x) {
    int temp = 0;
    while (x > 0) {
        int digit = x % 10;
        if (digit != 0) temp++;
        x /= 10;
    }
    if (temp == 1) return true;
    else return false;
}

signed main() {
    fast_io
    vi a(1000000);
    for (int i = 1; i <= 1000000; i++) {
        if (roundd(i)) a[i] = a[i-1] + 1;
        else a[i] = a[i-1];
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << a[n] << "\n";
    }
    return 0;
}