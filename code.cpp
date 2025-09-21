#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        // count ones and check contiguity
        int cnt1 = count(s.begin(), s.end(), '1');
        if (cnt1 == n) {
            cout << "YES\n";
            for (int i = 1; i <= n; ++i) {
                if (i > 1) cout << ' ';
                cout << i;
            }
            cout << "\n";
            continue;
        }
        if (cnt1 == 0) {
            cout << "NO\n";
            continue;
        }
        // find first and last '1'
        int L = s.find('1');
        int R = s.rfind('1');
        bool contiguous = true;
        for (int i = L; i <= R; ++i) if (s[i] != '1') { contiguous = false; break; }
        if (!contiguous) { 
            cout << "NO\n"; 
            continue; 
        }
        // Build permutation:
        // - Put the ones block [L..R] in strictly increasing order at positions L..R
        // - Put the zeros block (outside) so that each target x there can be skipped by the random walk.
        //   A simple way: make the prefix [1..L-1] strictly decreasing and the suffix [R+1..n] strictly decreasing.
        vector<int> p(n+1);
        // Ones block
        for (int i = L; i <= R; ++i) p[i] = i; 
        // Prefix zeros: decreasing from L-1 down to 1 mapped from values L-1..1
        for (int i = 1; i < L; ++i) p[i] = L - i;
        // Suffix zeros: decreasing mapping of values n..R+1
        for (int i = R+1; i <= n; ++i) p[i] = n - (i - (R+1));
        // Fix value collisions by offsetting suffix by +(L-1)
        // Current used values in prefix are [1..L-1], ones block uses [L..R]; shift suffix to [R+1..n]
        for (int i = R+1; i <= n; ++i) p[i] += R; // shift so values become in [R+1..n]
        // Output
        cout << "YES\n";
        for (int i = 1; i <= n; ++i) {
            if (i > 1) cout << ' ';
            cout << p[i];
        }
        cout << "\n";
    }
    return 0;
}
