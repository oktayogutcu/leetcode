/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> ans(temperatures.size(),0);
        
        for(int i = 0; i < temperatures.size(); i++){
           
            while(!s.empty() && temperatures[s.top()] < temperatures[i]){
                ans[s.top()] = i - s.top();
                s.pop();
            }

            s.push(i);
            
        } 
        return ans;
    }
};
// @lc code=end

