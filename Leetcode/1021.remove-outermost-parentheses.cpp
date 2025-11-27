/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int balance = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (balance > 0) {
                    result += s[i];
                }
                balance++;
            } else {
                balance--;
                if (balance > 0) {
                    result += s[i];
                }
            }
        }
        return result;
    }
};
// @lc code=end

