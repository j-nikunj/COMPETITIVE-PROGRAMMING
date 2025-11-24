#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> val = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    string s = "FNAOEXNLID";
    cout << val[s[5]] << endl;
    return 0;
}