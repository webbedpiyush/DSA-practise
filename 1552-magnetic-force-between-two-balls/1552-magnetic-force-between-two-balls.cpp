class Solution {
public:
    bool isPossible(vector<int>& position, int m, int mid) {
        int ballCount = 1;
        int lastPos = position[0];

        for(int i = 0;i<position.size();i++) {
            if(position[i] - lastPos >= mid) {
                ballCount++;
                if(ballCount == m) {
                    return true;
                }
                lastPos = position[i];
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start = 0;
        int maxi = -1;
        for(int i = 0;i<position.size();i++) {
            maxi = max(maxi,position[i]);
        }
        int end = maxi;
        int ans = -1;
        int mid = start + (end - start)/2;

        while(start <= end) {

            if(isPossible(position,m,mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
};