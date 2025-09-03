#include <bits/stdc++.h>
using namespace std;

    void printAnswer(vector<int> a, int n) {
        deque<int> b;
        int flag = 1;
        b.push_back(a[0]);
        for (int i = 1; i < n; i++) {
            if (flag == 1) {
                if (b.back() > b.front()) {
                        b.push_back(a[i]);
                }
                else {
                    b.push_front(a[i]);
                }
                flag = 0;
            }
            else {
                if (b.back() > b.front()) {
                    b.push_front(a[i]);
                }
                else {
                    b.push_back(a[i]);
                }
                flag = 1;
            }
        }
        cout << min(b.back(), b.front()) << " ";
    }

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> I(q), x(q);
        for (int i = 0; i < q; i++) {
            cin >> I[i] >> x[i];
            I[i]--;
        }
        
        printAnswer(a, n);
        
        for (int i = 0; i < q; i++) {
            a[I[i]] = x[i];
            printAnswer(a, n);
        }
        
        cout << "\n";
    }
}