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
    int n, d;
    cin >> n >> d;
    vi p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(all(p));

    int l = 0, r = n-1;
    int count = 0;
    int sum = 0;
    while (l <= r) {
        sum += p[r];
        l++;
        if (sum > d) {
            count++;
            r--;
            sum = 0;
        }
    }
    cout << count << "\n";
    return 0;
}