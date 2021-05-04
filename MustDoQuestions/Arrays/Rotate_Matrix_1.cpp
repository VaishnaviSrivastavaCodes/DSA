//https://leetcode.com/problems/rotate-image/

// Rotating clockwise -> Using extra space 
//Find a relation between old and new position of element

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> temp  = matrix;
       
        int n = matrix.size();
        
        for(int i =0; i<n;i++){
            for(int j =0; j<n;j++){
                matrix[j][n-i-1] = temp[i][j];
            }
        }
        
        
    }
};
