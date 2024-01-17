class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        vector<int> ans(1001,0);

        int i = 0;
        while( i < arr.size() ) {
            int count = 1;
            int j = i + 1;
            while( j < arr.size() && arr[i] == arr[j]) {
                j++;
                count++;
            }
            if(ans[count]) {
                return false;
            }
            i = j;
            ans[count] = 1;
        }
        return true;
    }
};