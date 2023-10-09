/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        vector<pair<int, int>> temp;
        unordered_map<int,int> umap;

        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
        }

        int l = 0;
        for (auto it = umap.begin(); it != umap.end(); ++it) {
            temp.push_back(make_pair(it->second, it->first));
        }


        sort(temp.begin(), temp.end(), greater<pair<int, int>>());

        for(int i = 0; i < k; i++){
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};
// @lc code=end

