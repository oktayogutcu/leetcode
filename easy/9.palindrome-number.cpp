/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        bool stop = false, result = false;
        int val1 = x, val2 = 0;
        vector<int> inputIndices;
        // get value into vector array
        if(x >= 0){
            while(!stop){
                val2 = val1 - (val1/10)*10;
                inputIndices.push_back(val2);

                val1 = val1/10;
                if(val1 == 0){
                    stop = true;
                }
            }

            result = true;
            //compare values to be palindrome or not?
            for(int i = 0; i < inputIndices.size()/2; i++){
                if(!(inputIndices[i] == inputIndices[inputIndices.size() - i - 1])){
                    result = false;
                    break;
                }
            }
        }

        return result;
    }
};
// @lc code=end

