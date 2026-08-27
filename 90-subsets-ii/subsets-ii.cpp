class Solution {
public:

    void subset(vector<int>& nums, int index, int n,
                vector<int>& temp, vector<vector<int>>& ans) {

        ans.push_back(temp);

        for (int i = index; i < n; i++) {

            // Skip duplicate values at the same level
            if (i > index && nums[i] == nums[i - 1])
                continue;

            temp.push_back(nums[i]);

            subset(nums, i + 1, n, temp, ans);

            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> temp;

        subset(nums, 0, nums.size(), temp, ans);

        return ans;
    }
};