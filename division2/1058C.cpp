#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define F first
#define S second

typedef vector<int> vi;
typedef pair<int, int> pii;


bool isPalindrome(vector<int> &arr){
    int n = arr.size();
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] != arr[n-i-1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    int temp = 0;
    int arr[32];
    
    for (int i = 0; i < 32; i++)
    {
        arr[i] = (n>>i)&1;
        temp += (n>>i)&1;
    }

    if (temp % 2 == 1) {
        cout << "NO" << "\n";
        return;
    }

    int count = 0;
    int prev = 0;
    vi nishant;  // nishant bhai ka naam
    for (int i = 0; i < 32; i++) {
        if (count == 0) {
            if (arr[i] == 1) {
                prev = i;
                count++;
                continue;
            }
        }
        if (arr[i] == 1) {
            nishant.push_back(i - prev); // again
            prev = i;
        }
    }
    if (isPalindrome(nishant)) {  // lastly
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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