class Solution {
public:
    int sumtarget(vector<int>& nums, int target, int n) {
        if (n == 0) {
            return target == 0 ? 1 : 0;
        }

        int nottake = sumtarget(nums, target, n - 1);

        int take = 0;
        if (nums[n - 1] <= target) {
            take = sumtarget(nums, target - nums[n - 1], n - 1);
        }

        return take + nottake;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;

        for (int x : nums) {
            sum += x;
        }

        if (abs(target) > sum) return 0;
        if ((sum + target) % 2 != 0) return 0;

        int s = (sum + target) / 2;

        return sumtarget(nums, s, nums.size());
    }
};