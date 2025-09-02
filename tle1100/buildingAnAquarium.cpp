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

int water (vi a, int mid) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (mid - a[i] >= 0) {
            sum = sum + (mid - a[i]);
        }
    }
    return sum;
}

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int r = *max_element(all(a));
        int l = 0;
        int mid;
        while (l + 1 < r) {
            mid = (r + l) / 2;
            if (water(a, mid) <= x) {
                l = mid;
            }
            else {
                r = mid;
            }
        }
        cout << r << " " << l << "\n";
    }

    return 0;
}