#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

// Per your request, to avoid writing std::
using namespace std;

// Using long long for integer types is a good practice in competitive programming
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int gcd_even = 0;
    int gcd_odd = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i % 2 == 0) {
            gcd_even = __gcd(gcd_even, a[i]);
        } else {
            gcd_odd = __gcd(gcd_odd, a[i]);
        }
    }

    // Check if gcd_even can be the coloring number 'd'
    bool possible_with_even_gcd = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % gcd_even == 0) {
            possible_with_even_gcd = false;
            break;
        }
    }

    if (possible_with_even_gcd) {
        cout << gcd_even << "\n";
        return;
    }

    // Check if gcd_odd can be the coloring number 'd'
    bool possible_with_odd_gcd = true;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % gcd_odd == 0) {
            possible_with_odd_gcd = false;
            break;
        }
    }

    if (possible_with_odd_gcd) {
        cout << gcd_odd << "\n";
        return;
    }

    // If neither is possible
    cout << "0\n";
}

signed main() {
    // Fast I/O is a great habit for competitive programming
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}