/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = 0, carry = 1;

        for(i = digits.size() - 1; i >= 0; i--){
            digits[i] += carry;
            if(digits[i] >= 10){
                carry = digits[i] / 10;
                digits[i] = digits[i] % 10; 
            }
            else{
                carry = 0;
                break;
            }
        }

        if(carry > 0){
            digits.insert(digits.begin() + 0, carry);
        }
        
    return digits;  
    } 
};
// @lc code=end

