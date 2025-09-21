// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
// #define F first
// #define S second

// typedef vector<int> vi;
// typedef pair<int, int> pii;

// void solve() {
//     int n;
//     cin >> n;
//     vi a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; i++) {
            
//         }
//     }
// }

// signed main() {
//     fast_io

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

const int MOD = 1e9 + 7;

int n;
vector<int> a;
vector<vector<vector<int>>> memo;

long long count_colored_subsequences(int i, int last_red, int last_blue) {
    if (i == n) {
        return 1;
    }
    if (memo[i][last_red][last_blue] != -1) {
        return memo[i][last_red][last_blue];
    }
    long long count = 0;
    count = (count + count_colored_subsequences(i + 1, last_red, last_blue)) % MOD;
    if (a[i] > last_red) {
        count = (count + count_colored_subsequences(i + 1, a[i], last_blue)) % MOD;
    }
    if (a[i] > last_blue) {
        count = (count + count_colored_subsequences(i + 1, last_red, a[i])) % MOD;
    }
    return memo[i][last_red][last_blue] = count;
}

void solve() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    memo.assign(n, vector<vector<int>>(n + 1, vector<int>(n + 1, -1)));
    long long total_colored = count_colored_subsequences(0, 0, 0);
    long long total_colored_non_empty = (total_colored - 1 + MOD) % MOD;
    long long inv2 = (MOD + 1) / 2;
    long long good_non_empty = (total_colored_non_empty * inv2) % MOD;
    long long ans = (1 + good_non_empty) % MOD;

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}