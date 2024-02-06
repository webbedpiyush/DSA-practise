class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        
        for(auto i : strs){
            string str = i;
            sort(str.begin(),str.end());
            ans[str].push_back(i);
        }

        vector<vector<string>> result;
        for (auto i : ans) {
            result.push_back(i.second);
        }
        
        return result;
    }
};
