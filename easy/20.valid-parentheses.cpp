/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        
        bool result = false;
        // Create a map of strings to integers
        std::map<char, char> map;

        stack<char> string_stack;

        char temp;
        
        // Insert some values into the map
        map['('] = ')';
        map['['] = ']';
        map['{'] = '}';

        for(int i = 0; i < s.size(); i++){
            //push first char to stack, if it's opening parantheses
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                string_stack.push(s[i]);
            }
            else{
                if(!string_stack.empty()){
                    temp = string_stack.top();
                    string_stack.pop();
                    
                    if(map[temp] != s[i]){
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
    if(!string_stack.empty()) 
        return false;
    else 
        return true;
    }
};
// @lc code=end

