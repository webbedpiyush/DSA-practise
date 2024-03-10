class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> cnt;
        for(const int i : nums1) {
            cnt[i]++;
        }

        for(const int i : nums2) {
            if(cnt[i] > 0) {
                int tmp = count(nums2.begin(), nums2.end(), i); 
                if(tmp > 0) {
                    ans.push_back(i);
                    cnt[i] = 0;
                }
            }
        }
        return ans;

    }
};