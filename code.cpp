    for (int i = 1; i < n; i++) {
        cin >> a[i];
        int sz = a[i].size();
        ans = min(ans, sz); 
        for (int j = 0; j < ans; j++) {
            if (a[i][j] != a[i-1][j]) {
                ans = j;
                break;
            }
        }
    }
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        int sz = a[i].size();
        for (int j = 0; j < min(sz, ans); j++) {
            if (a[i][j] != a[i-1][j]) {
                ans = j;
                break;
            }
        }
    }