class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;


        while(rowIndex < row && colIndex >= 0) {
            int ele = matrix[rowIndex][colIndex];
            if(ele == target) {
                return true;
            } else if(ele > target) {
                colIndex--;
            } else {
                rowIndex++;
            }
        }
        return false;
    }
};