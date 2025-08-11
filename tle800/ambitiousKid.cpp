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

int32_t main() {
        fast_io
        int n;
        cin >> n;
        vi a(n);
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mini = min(mini, abs(a[i]));
        }
        cout << mini << endl;
        return 0;
}