class Solution {
public:

    double power(double x, long long n) {

        // Base case
        if(n == 1) {
            return x;
        }

        // Negative power
        if(n < 0) {
            return 1 / power(x, -n);
        }

        // Recursive call
        double ans = power(x, n / 2);

        // Even power
        if(n % 2 == 0) {
            return ans * ans;
        }

        // Odd power
        return ans * ans * x;
    }

    double myPow(double x, int n) {

        if(n==0){
            return 1;
        }

        long long N = n;

        return power(x, N);
    }
};