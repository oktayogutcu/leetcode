/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // //solution without using algorithm lib (sort)
        // int i = 0, j = 0;
        // string result = "";
        // char temp;

        // for(i = 0; i < 200; i++){
        //     for(j = 0; j < strs.size(); j++){
                
        //         if(strs[j].size() > i){
        //             if(j == 0){
        //                 temp = strs[0][i];
        //             }
        //             else{
        //                 // cout << temp << " ? " << strs[j][i] << endl;
        //                 if(strs[j][i] != temp){
        //                     goto endLoop; // break also first loop
        //                 }      
        //             }
        //         }
        //         else{
        //             goto endLoop; // break also first loop
        //         }
        //     } 
        //     result.push_back(temp); 
        // }
        
        // endLoop:


        //solution with using algorithm lib (sort)
        string result = "";
        sort(strs.begin(), strs.end());
        string temp = strs[0];

        for(int i = 0; i < strs[strs.size()-1].size(); i++){
            if(temp[i] != strs[strs.size()-1][i]){
                break;
            }
            result.push_back(temp[i]);
        }

        return result;
    }
};
// @lc code=end

