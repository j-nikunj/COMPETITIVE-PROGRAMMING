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
    vi a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int points = m - a[n-1];
    int lasta = 0;
    int lastb = 0;
    for (int i = 0; i < n; i++) {
        if (abs(a[i] - lasta) % 2 == 0 && abs(b[i] - lastb) % 2 == 0) {
            points += abs(a[i]-lasta);
            lasta = a[i];
        }
        else if (abs(a[i] - lasta) % 2 == 1 && abs(b[i] - lastb) % 2 == 0) {
            points += (abs(a[i]-lasta)-1);
            lasta = a[i];
        }
        else if (abs(a[i] - lasta) % 2 == 0 && abs(b[i] - lastb) % 2 == 1) {
            points += (abs(a[i]-lasta)-1);
            lasta = a[i];
            
        }
        else if (abs(a[i] - lasta) % 2 == 1 && abs(b[i] - lastb) % 2 == 1) {
            points += abs(a[i]-lasta);
            lasta = a[i];
        }
        lastb = b[i];
    }
    cout << points << "\n";
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