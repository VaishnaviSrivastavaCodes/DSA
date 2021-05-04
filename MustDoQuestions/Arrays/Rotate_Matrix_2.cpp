//https://leetcode.com/problems/rotate-image/
// No extra space used
//O(1) space, O(m*n) time
// Reverse column, then transpose
//In case of clockwise, reverse row first using reverse(a[i], a[i] +n)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //reverse column
        for(int i =0; i<n;i++){
            int sr =0, er = n-1;
            
            while(sr<er){
                swap(matrix[sr][i], matrix[er][i]);
                sr++; er--;
            }
        }
         //Transpose        
        for(int i =0; i<n;i++){
            for(int j =0 ; j<n;j++ ){
                if(i<j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
    }
};
