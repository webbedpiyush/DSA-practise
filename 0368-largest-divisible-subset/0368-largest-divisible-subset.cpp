class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> gpSize(n, 1);
        vector<int> prevEl(n, -1);

        int maxIn = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && gpSize[i] < gpSize[j] + 1) {
                    gpSize[i] = gpSize[j] + 1;
                    prevEl[i] = j;
                }
            }
            if (gpSize[i] > gpSize[maxIn]) {
                maxIn = i;
            }
        }

        vector<int> result;
        for (int i = maxIn; i != -1; i = prevEl[i]) {
            result.insert(result.begin(), nums[i]);
        }
        return result;
    }
};