class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> count;
        vector<vector<int>> ans(2);
        for(int i = 0;i<matches.size();i++) {
            int c = matches[i][1];
            
            if(!count.count(matches[i][0])) {
                count[matches[i][0]] = 0;
            }
            if(!count.count(matches[i][1])) {
                count[matches[i][1]] = 1;
            }
            else {
                count[c]++;
            }
        }

        for (const auto& pair : count) {
            int num = pair.second;
            if (num == 0) {
                ans[0].push_back(pair.first);
            } else if (num == 1) {
                ans[1].push_back(pair.first);
            }
        }
        for (int i = 0; i < 2; ++i) {
            sort(ans[i].begin(), ans[i].end());
        }
        return ans;
    }
};