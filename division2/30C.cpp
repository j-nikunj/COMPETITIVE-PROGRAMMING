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

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    vector<pii> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i].F;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i].S;
    }

    sort(all(a));
    sort(all(b));
    vector<pii> zeroB;
    vector<pii> nonzeroB;
    for (int i = 0; i < m; i++) {
        if (b[i].S == 0) {
            zeroB.push_back({b[i].F, b[i].S});
        }
        else {
            nonzeroB.push_back({b[i].F, b[i].S});
        }
    }

    int count = 0;
    int maxi = a[n-1];
    for (int i = 0; i < nonzeroB.size(); i++) {
        if (nonzeroB[i].F <= maxi) {
            count++;
            maxi = max(maxi, nonzeroB[i].S);
        }
        else break;
    }

    cout << count << endl;
    for (int i = 0; i < zeroB.size(); i++) {
        cout << zeroB[i].F << " " << zeroB[i].S << endl;
    }
    return;
    int i = n - 1;
    int j = zeroB.size() - 1;
    while (i >= 0 && j >= 0) {
        if (zeroB[j].F <= a[i]) {
            count++;
            i--;
            j--;
        }
        else if (zeroB[j].F > a[i]) {
            j--;
        }
    }

    cout << count << endl;
    return;
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