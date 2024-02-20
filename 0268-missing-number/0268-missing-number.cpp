class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        sort(nums.begin(),nums.end());
        int cnt = 0;
        while(cnt <= n) {
            if(count(nums.begin(),nums.end(),cnt)){
                cnt++;
            } else {
                ans = cnt;
                break;
            }
        }
        return ans;
    }
};