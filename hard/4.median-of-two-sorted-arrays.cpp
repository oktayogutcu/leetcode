/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray;
        int i = 0, j = 0, k = 0;
        double ans = 0.0, medInd = 0;
        while(j < nums1.size() && k < nums2.size()){

            if(nums1[j] < nums2[k]){
                mergedArray.push_back(nums1[j]);
                j++;
            }
            else{
                mergedArray.push_back(nums2[k]);
                k++;
            }
        }
        if(j == nums1.size()){
            for(i = k; i < nums2.size(); i++) mergedArray.push_back(nums2[i]);
        }

        if(k == nums2.size()){
            for(i = j; i < nums1.size(); i++) mergedArray.push_back(nums1[i]);
        } 

        // for(i = 0; i < mergedArray.size(); i++) cout << mergedArray[i] << endl;

        medInd = mergedArray.size()/2;

        if(mergedArray.size() % 2 == 0){
            ans = ((double)mergedArray[medInd-1] + (double)mergedArray[medInd])/2;
        }
        else{
            ans = mergedArray[(int)medInd];
        }

        return ans;
    }
};
// @lc code=end

