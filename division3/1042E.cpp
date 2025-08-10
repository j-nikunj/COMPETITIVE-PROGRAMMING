#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<unsigned int> a(n), b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        if(a[n-1] != b[n-1]) { 
            cout << "No\n"; continue;
        }

        vector<unsigned int> curr(n-1);
        for(int i=0;i<n-1;i++) curr[i] = a[i] ^ b[i];

        bool possible = true;
        
        for(int i=0;i<n-1 && possible; ){
            if(curr[i]==0){ ++i; continue; }
            int temp=i;
            while(true){
                if(curr[temp] == a[temp+1]) {
                    i = temp+1; break;
                }
                if(temp == n-2) {
                    possible = false; break;
                }
                if(curr[temp+1] != (curr[temp] ^ a[temp+1])) {
                    possible = false; break;
                }
                ++temp;
            }
        }
        cout << (possible ? "Yes" : "No") << '\n';
    }
    return 0;
}