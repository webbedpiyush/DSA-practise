class Solution {
public:
    int minimumLength(string s) {
        int n = s.size(); 
        int start = 0;
        int end = n - 1;

        for (; start < end && s[start] == s[end]; start++, end--) {

            while (s[start] == s[start + 1] && start + 1 < end) {
                start++;
            }

            while (s[end] == s[end - 1] && start < end - 1) {
                end--;
            }
        }
        return end - start + 1;
    }
};    