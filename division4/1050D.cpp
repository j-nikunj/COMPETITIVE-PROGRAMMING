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
    int n;
    cin >> n;
    vi odd, even;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x%2) odd.push_back(x);
        else even.push_back(x);
    }
    sort(all(odd));
    sort(all(even));
    int sum = 0;
    if (odd.size() == 0) {
        cout << "0\n";
        return;
    }
    sum = odd[odd.size()-1];
    for (int i = 0; i < even.size(); i++) {
        sum += even[i];
    }
    int x = odd.size();
    for (int i = x/2; i < x-1;i++) {
        sum += odd[i];
    }
    cout << sum << "\n";
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