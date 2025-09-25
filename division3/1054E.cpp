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
    int n, k, l, r;
    cin >> n >> k >> l >> r;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int total = 0;
    int L1 = 0, L2 = 0; 
    unordered_map<int, int> freq;
    unordered_map<int, int> freq1;
    for (int R = 0; R < n; ++R) {
        freq[a[R]]++;
        freq1[a[R]]++;
        while (freq.size() > k) {
            freq[a[L1]]--;
            if (freq[a[L1]] == 0) {
                freq.erase(a[L1]);
            }
            L1++;
        }
        while (freq1.size() > k - 1) {
            freq1[a[L2]]--;
            if (freq1[a[L2]] == 0) {
                freq1.erase(a[L2]);
            }
            L2++;
        }
        int start_L_k_distinct = L1;
        int end_L_k_distinct = L2 - 1;
        int start_L_length = R - r + 1;
        int end_L_length = R - l + 1;
        int final_L_start = max(start_L_k_distinct, start_L_length);
        int final_L_end = min(end_L_k_distinct, end_L_length);
        if (final_L_end >= final_L_start) {
            total += (long long)(final_L_end - final_L_start + 1);
        }
    }
    cout << total << "\n";
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