class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3 ) {
            return {};
        }
        sort(nums.begin(),nums.end());
        if(nums[0] > 0) {
            return {};
        }
        vector<vector<int>> res;
        for(int i = 0;i<nums.size();i++) {
            if(nums[i] > 0) {
                break;
            }
            if(i > 0 && nums[i] == nums[i -1]){
                continue;
            }
            int st = i + 1;
            int end = nums.size() - 1;
            int sum = 0;
            while(st < end ) {
                sum = nums[i] + nums[st] + nums[end];
                if(sum > 0) {
                    end--;
                } else if (sum < 0) {
                    st++;
                } else {
                    res.push_back({nums[i],nums[st],nums[end]});
                    int lastSt = nums[st] , lastEnd = nums[end];
                    while(st < end  && nums[st] == lastSt ){
                        st++;
                    }
                    while(st < end  && nums[end] == lastEnd ){
                        end--;
                    }
                }
            }

        }
        return res;

    }
};