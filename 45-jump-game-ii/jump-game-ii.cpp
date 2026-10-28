class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int n = nums.size();
        int cnt = 0;

        while (r < n - 1) {
            int farthest = 0;

            for (int i = l; i <= r; i++) {
                farthest = max(i + nums[i], farthest);
            }

            cnt++;
            l = r + 1;
            r = farthest;
        }

        return cnt;
    }
};