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
    int n;
    cin >> n;
    vector<vi> a;
    vi k(n);
    int maxk = 0;
    for (int i = 0; i < n; i++) {
        cin >> k[i];
        maxk = max(k[i], maxk);
        vi temp(k[i]);
        for (int j = 0; j < k[i]; j++) {
            cin >> temp[j];
        }
        a.push_back(temp);
    }
    // vi ans;
    // vi eachMin(maxk);
    // for (int i = 0; i < maxk; i++) {
    //     int minEle = INT_MAX;
    //     int ind = -1;
    //     for (int j = 0; j < n; j++) {
    //         if (i < k[j]) {
    //             if (a[j][i] < minEle) {
    //                 minEle = a[j][i];
    //                 ind = j;
    //             }
    //         }
    //     }
    //     eachMin[i] = ind;
    // }
    // int temp = ans.size();
    // while(temp < maxk) {
    //     for (int i = temp; i < a[eachMin[temp]].size(); i++) {
    //         ans.push_back(a[eachMin[temp]][i]);
    //     }
    //     temp = ans.size();
    // }
    // for (int i = 0; i < temp; i++) {
    //     cout << ans[i] << " ";
    // }
    // cout << "\n";


    list<vi> pools;
    vi initial_pool(n);
    iota(initial_pool.begin(), initial_pool.end(), 0);
    pools.push_back(initial_pool);
    vi ans;
    for (int j = 0; j < maxk; j++) {
        bool col_val_found = false;
        for (auto it = pools.begin(); it != pools.end(); ++it) {
            vi& current_pool = *it;
            int min_val = LLONG_MAX;
            vi candidates_at_j; 
            for (int arr_idx : current_pool) {
                if (j < a[arr_idx].size()) {
                    candidates_at_j.push_back(arr_idx);
                    min_val = min(min_val, a[arr_idx][j]);
                }
            }
            if (min_val == LLONG_MAX) {
                current_pool = candidates_at_j;
                continue; 
            }
            ans.push_back(min_val);
            col_val_found = true;
            vi winners;
            vi losers;
            for (int arr_idx : candidates_at_j) {
                if (a[arr_idx][j] == min_val) {
                    winners.push_back(arr_idx);
                } else {
                    losers.push_back(arr_idx);
                }
            }
            *it = winners;
            if (!losers.empty()) {
                pools.insert(next(it), losers);
            }
            break;
        }
        if (!col_val_found) {
            break;
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
    }
    cout << "\n";
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