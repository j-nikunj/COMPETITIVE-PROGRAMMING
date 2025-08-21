#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define F first
#define S second

typedef vector<int> vi;
typedef pair<int, int> pii;

int32_t main()
{
    fast_io

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int min_ops = k;
        int evens = 0;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            min_ops = min(min_ops, (k - x % k) % k);
            if (x % 2 == 0) {
                evens++;
            }
        }

        if (k == 4) {
            min_ops = min(min_ops, max((long long)0, 2 - evens));
        }

        cout << min_ops << endl;
    }

    return 0;
}