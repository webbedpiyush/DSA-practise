class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> cnt;
        int maxi = INT_MIN;

        for(int i = 0;i<nums.size();i++) {
            cnt[nums[i]]++;
            maxi = max(maxi,cnt[nums[i]]);
        }

        int res = 0;
        for(int i = 0;i<nums.size();i++) {
            if(cnt[nums[i]] == maxi) {
                res++;
            }
        }
        return res;
    }
};