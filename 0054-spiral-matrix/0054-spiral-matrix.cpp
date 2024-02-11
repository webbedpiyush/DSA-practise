class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int total = m*n;
        int cnt = 0;

        int startRow = 0;
        int endCol = n - 1;
        int endRow = m - 1;
        int startCol = 0;
        vector<int> ans;
    
        while(cnt < total) {
            for(int in = startCol ; in <= endCol && cnt < total; in++) {
                ans.push_back(matrix[startRow][in]);
                cnt++;
            }
            startRow++;
            for(int in = startRow ; in <= endRow && cnt < total; in++) {
                ans.push_back(matrix[in][endCol]);
                cnt++;
            }
            endCol--;
            for(int in = endCol ; in >= startCol && cnt < total; in--) {
                ans.push_back(matrix[endRow][in]);
                cnt++;
            }
            endRow--;
            for(int in = endRow ; in >= startRow && cnt < total; in--) {
                ans.push_back(matrix[in][startCol]);
                cnt++;
            }
            startCol++;
        }
        return ans;
    }
};