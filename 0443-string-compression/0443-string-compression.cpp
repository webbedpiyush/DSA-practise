class Solution {
public:
    int compress(vector<char>& chars) {
       int i = 0;
       int ansIndex = 0;
       int n = chars.size();
       while(i < n) {
           int j = i + 1;
           while(j < n && chars[i] == chars[j]) {
               j++;
           }

           int cnt = j - i;
           chars[ansIndex++] = chars[i];
           if(cnt > 1) {
               string count = to_string(cnt);
               for(char ch : count) {
                   chars[ansIndex++] = ch;
               }
           }
           i = j;
       }
       return ansIndex;
    }
};