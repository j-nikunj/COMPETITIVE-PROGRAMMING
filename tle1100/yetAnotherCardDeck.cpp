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

int tempSearch(vi a, int k) {

}

signed main() {
    fast_io
        int n, q;
        cin >> n >> q;
        vi a(n);
        vi hsh(51);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (hsh[a[i]] == 0) hsh[a[i]] = i+1;
        }
        vi t(q);
        for (int i = 0; i < q; i++) {
            cin >> t[i];
        }
        for (int i = 0; i < q; i++) {
            int dist = hsh[t[i]];
            cout << dist << " ";
            for (int j = 0; j < 51; j++) {
                if (hsh[j] < dist) hsh[j]++;
            }
            hsh[t[i]] = 1;
        }
        cout << "\n";

    return 0;
}