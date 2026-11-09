
class Solution {
public:
    int happy(int n) {
        int res = 0;

        while(n) {
            int x = n % 10;
            res += x * x;
            n /= 10;
        }

        return res;
    }

    bool isHappy(int n) {
        set<int> st;

        while(n != 1 && st.find(n) == st.end()) {
            st.insert(n);
            n = happy(n);
        }

        return n == 1;
    }
};
