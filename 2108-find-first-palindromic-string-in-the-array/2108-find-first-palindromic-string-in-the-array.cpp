class Solution {
public:
    bool checkPalindrome(string st) {
        int s = 0;
        int e = st.length()-1;
        while(s<=e) {
            if(st[s] != st[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for( string s : words) {
            if(checkPalindrome(s)) {
                return s;
            }
        }
        return "";
    }
};