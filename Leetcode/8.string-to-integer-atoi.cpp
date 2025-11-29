/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while (s[left] == ' ') left++; //whitespaces

        bool isNeg = false;
        if (s[left] == '-') {isNeg = true; left++;} //sign
        else if (s[left] == '+') left++;

        while (s[left] == '0') left++; //leading zeroes

        long long int ans = 0;
        while (left <= right) {
            if (s[left] < '0' || s[left] > '9') { //non integer values
                break;
            }
            int digit = s[left] - '0';
            // Check overflow BEFORE updating ans
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return isNeg ? INT_MIN : INT_MAX;
            }
            ans = ans * 10 + digit;
            left++;
        }
        if (isNeg) return ans * (-1);
        else return ans;
    }
};
// @lc code=end

