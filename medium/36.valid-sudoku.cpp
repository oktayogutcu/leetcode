/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> umap1, umap2, umap3;

        for(int i = 0; i < 9; i++){


            for(int j = 0; j < 9; j++){

                if(0 == umap1[board[i][j]] || board[i][j] == '.')
                    umap1[board[i][j]]++;
                else
                    return false;
                
                if(0 == umap2[board[j][i]] || board[j][i] == '.')
                    umap2[board[j][i]]++;
                else
                    return false;
                

                if(i % 3 == 0 && j% 3 == 0){
                    
                    for(int k = 0; k < 3; k++){
                        for(int l = 0; l < 3; l++){
                            if(board[i+k][j+l] == '.' || 0 == umap3[board[i+k][j+l]])
                                umap3[board[i+k][j+l]]++;
                            else{
                                // cout << board[i+k][j+l] << " - "<< i+k << j+l << endl;
                                return false;
                            }
                        }
                    }
                    umap3.clear();         

                }
            }
            umap1.clear();
            umap2.clear();
        } 
        return true;
    }
};
// @lc code=end

