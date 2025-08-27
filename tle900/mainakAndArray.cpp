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

signed main() {
    fast_io

    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vi A(N);
        int ans = -1000000007;

	for(int i = 0; i < N; ++i){
		cin >> A[i];
	}

	for(int i = 0; i < N; ++i){
		ans = max(ans, A[(i - 1 + N) % N] - A[i]);
	}

	for(int i = 1; i < N; ++i){
		ans = max(ans, A[i] - A[0]);
	}

	for(int i = 0; i < N - 1; ++i){
		ans = max(ans, A[N - 1] - A[i]);
	}

	cout << ans << '\n';
    }

    return 0;
}