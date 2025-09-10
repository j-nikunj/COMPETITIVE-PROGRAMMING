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

void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++)
            cout << "1" << " ";
        cout << "\n";
    }
    else if (k == 1 || (k == 2 && n % 2 == 1))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        cout << n / 2 << "\n";
        if (n % 2 == 1)
        {
            cout << "3" << " ";
            for (int i = 1; i < n / 2; i++)
                cout << "2" << " ";
        }
        else
        {
            cout << "2" << " ";
            for (int i = 1; i < n / 2; i++)
                cout << "2" << " ";
        }
        cout << "\n";
    }
}

signed main()
{
    fast_io

        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}