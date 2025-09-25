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

int health(int d, int r) {
    if (d == 0) return 0;
    int x = r + 1;
    int q = d / x;
    if (q == 0) return 2;
    int rem = d % x;
    int costbig = ((q + 1) * (q + 2)) / 2;
    int costsmall = (q * (q + 1)) / 2;
    int totalcost = rem * costbig + (x - rem) * costsmall;
    return totalcost - r + 1;
}

bool isPossible(int h, int d, int r) {
    if (r < 0) return false;
    if (r >= d - 1) {
        return h + r >= d + 1;
    } 
    else {
        return h >= health(d, r);
    }
}

void solve() {
    int h, d;
    cin >> h >> d;
    if (d == 0) {
        cout << 0 << "\n";
        return;
    }
    int low = 0, high = 2e9 + 7, ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(h, d, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << d + ans << "\n";
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