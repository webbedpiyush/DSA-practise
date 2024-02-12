class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int ans = -1;
        int n = nums.size();
        if(n == 1) {
            return nums[0];
        }
        for(int i = 0;i<n;i++) {
            if(i+1 < n && nums[i] == nums[i+1]) {
                cnt++;
                if(cnt >= n/2) {
                    ans = nums[i];
                }
            }else{
                cnt = 0;
            }
        }
        return ans;
    }
};