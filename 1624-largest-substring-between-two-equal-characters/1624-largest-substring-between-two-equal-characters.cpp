class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int res = -1;
        unordered_map<char,int> ans;

        for(int i = 0;i<s.length();i++) {
            ans[s[i]] = i;
        }

        for(int i = 0;i<s.length();i++) {
            char c = s[i];
            if(ans[c] > i){
                res = max(ans[c] - i - 1,res);
            }
        }
        if(res != -1){
            return res;
        }
        else {
            return -1;
        }
    }
};