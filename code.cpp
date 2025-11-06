#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

struct Monster {
    int b, c;
};

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<Monster> mons(m);
    for (int i = 0; i < m; i++) cin >> mons[i].b;
    for (int i = 0; i < m; i++) cin >> mons[i].c;

    sort(all(a));
    sort(all(mons), [](auto &x, auto &y) {
        return x.b < y.b;
    });

    multiset<int> swords(all(a));
    int kills = 0;

    for (auto &mon : mons) {
        auto it = swords.lower_bound(mon.b); // smallest sword >= b
        if (it == swords.end()) continue;    // no sword can kill
        int sword = *it;
        swords.erase(it);
        kills++;
        if (mon.c > 0)
            swords.insert(max(sword, mon.c)); // gain new sword
    }

    cout << kills << "\n";
}

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
