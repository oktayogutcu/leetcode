/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(n, 0, 0, "", ans);
        return ans;
    }
private:
    void backtrack(int n, int open, int close, string s, vector<string>& ans) {
        if (open == n && close == n) {
            ans.push_back(s);
            return;
        }
        if (open < n) {
            s.push_back('(');
            backtrack(n, open + 1, close, s, ans);
            s.pop_back();
        }
        if (open > close) {
            s.push_back(')');
            backtrack(n, open, close + 1, s, ans);
            s.pop_back();
        }
    }
};
// @lc code=end

