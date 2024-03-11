class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> a(26,0);
        int index;
        string ans;
        for(int i=0;i<s.size();i++){
            index=s[i]-'a';
            a[index]++;
        }
        for(int i=0;i<order.size();i++){
            index=order[i]-'a';
            while(a[index]--) ans.push_back(order[i]);
        }
        for(int i=0;i<a.size();i++){
            while(a[i]-->0) ans.push_back(i+'a');
        }
        return ans;
    }
};