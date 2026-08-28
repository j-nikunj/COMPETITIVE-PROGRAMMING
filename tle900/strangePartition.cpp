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
#define endl '\n'

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    int sum = 0;
    int gif = n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        int temp = (arr[i] - 1) / x;
        gif += temp;
    }
    cout << ((sum - 1) / x) + 1 << " " << gif << endl;
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