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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long sum2 = 0;
        long long min_min = LLONG_MAX;
        long long min_second = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            vector<int> v(m);
            for (int j = 0; j < m; j++) {
                cin >> v[j];
            }
            sort(v.begin(), v.end());
            sum2 += v[1];
            min_min = min(min_min, v[0]);
            min_second = min(min_second, v[1]);
        }

        long long answer = sum2 - min_second + min(min_min, min_second);
        cout << answer << "\n";
    }

    return 0;
}