/*
 * @lc app=leetcode id=853 lang=cpp
 *
 * [853] Car Fleet
 */

// @lc code=start
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> combined;
        stack<float> timeStk;

        // Entering values in vector of pairs
        for (int i = 0; i < position.size(); i++){
            combined.push_back(make_pair(position[i],speed[i]));
            // cout << combined[i].first << combined[i].second << endl;
        }

        sort(combined.rbegin(), combined.rend());

        timeStk.push((target - combined[0].first)/static_cast<float>(combined[0].second));
        for(int i = 1; i < combined.size(); i++){
            float remaining = (target - combined[i].first)/static_cast<float>(combined[i].second);
            if(timeStk.top() < remaining){
                timeStk.push(remaining);
            }
        }


        return timeStk.size();
    }
};
// @lc code=end

