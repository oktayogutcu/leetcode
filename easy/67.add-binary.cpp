/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {

    int max_size = max(a.length(), b.length());
    int i = 0, j = a.length() - 1, k = b.length() - 1;
    string temp = "";
    int carry = 0;
    
    for(i = 0; i < max_size; i++){

        if(j >= 0)
            carry += a[j--] == '1' ? 1 : 0;

        if(k >= 0)
            carry += b[k--] == '1' ? 1 : 0;

        temp += to_string(carry%2);

        carry /= 2;

    }

    if(carry != 0){
       temp += to_string(carry%2); 
    }

    reverse(temp.begin(), temp.end());

    return temp;
    }
};
// @lc code=end

