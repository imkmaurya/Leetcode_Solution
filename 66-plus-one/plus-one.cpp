class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        int carry = 1;
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;

            ans[i] = sum % 10;
            carry = sum / 10;
        }

        if(carry == 1) {
            vector<int> result(n + 1);

            result[0] = 1;

            for(int i = 0; i < n; i++) {
                result[i + 1] = ans[i];
            }

            return result;
        }

        return ans;
    }
};