/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> stk;
        int max_area = 0;

        stk.push(make_pair(0,heights[0]));
        for(int i = 1; i < heights.size(); i++){
            
            if(heights[i] > stk.top().second){
                //if greater height comes, push it to stack. 
                //Because it can continue further.
                stk.push(make_pair(i,heights[i]));
            }
            else{
                int temp;
                //if smaller height comes, we we will pop the previous greater or equal values
                //Because we have to find where the current height start.

                while(!stk.empty() && stk.top().second >= heights[i]){
                    temp = stk.top().first;
                    //While doing this we have to calculate the rectangle area and find the max
                    //among the popped rectangles. we dont want to miss the possible result.
                    max_area = max(max_area, (i - stk.top().first) * stk.top().second);
                    stk.pop();
                }
                stk.push(make_pair(temp, heights[i]));
            }
        }

        int n = stk.size();
        for(int i = 0; i < n; i++){
            //in our stack, there are only rectangles that starts in the first index of pairs
            //and goes through the end. So we can calculate area of these rectangles and compare with 
            //the previous possible result to find actual result.
            int recArea = (heights.size() - stk.top().first) * stk.top().second;
            max_area = max(max_area, recArea);
            stk.pop();
        }

        return max_area;
    }
};
// @lc code=end

