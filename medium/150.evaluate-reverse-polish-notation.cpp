/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for(int i = 0; i < tokens.size(); i++){
            string st = tokens[i];
            char ch = st[st.length()-1];

            int num = ch - '0';
            // cout << st << "  " << ch << "  " << num << endl; 
            if(num < 0){
                int op1 = 0, op2 = 0;
                op1 = s.top();
                s.pop();
                op2 = s.top();
                s.pop();

                if(ch == '+')
                    s.push(op2+op1);
                else if(ch == '-')
                    s.push(op2-op1);
                else if(ch == '*')
                    s.push(op2*op1);
                else if(ch == '/')
                    s.push(op2/op1);
            }
            else{
                s.push(stoi(st));
            }
        }

        return s.top();
    }
};
// @lc code=end

