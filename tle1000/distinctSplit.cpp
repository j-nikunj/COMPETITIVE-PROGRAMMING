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

int uniqueChar(string s, int l, int r) {
    string temp = s;
    int rem = s.size() - (r - l + 1);
    sort(temp.begin() + l, temp.begin() + r + 1);
    auto it = unique(temp.begin() + l, temp.begin() + r + 1);
    temp.erase(it, temp.begin() + r + 1);
    return temp.size() - rem;
}

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> cnt(26, 0), p(26, 0);
        for(auto x: s) cnt[x - 'a']++;
        int ans = 0;
        for(auto x: s) {
            --cnt[x - 'a'];
            ++p[x - 'a'];
            int cur = 0;
            for(int i = 0; i < 26; ++i) {
                cur += min((long long)1, cnt[i]) + min((long long)1, p[i]);
            }
            ans = max(ans, cur);
        }
        cout << ans << endl;
    }

    return 0;
}