class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> row;
        vector<vector<int>> ans(1);

        for(auto i : nums) {
            if(row.count(i) == 0) {
                ans[0].push_back(i);
                row[i] = 1;
            }
            else {
                if( ans.size() < row[i] + 1) {
                    ans.push_back({i});
                } else {
                    ans[row[i]].push_back(i);
                }
                row[i]++;
            }
        }
        return ans;
    }
};