class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        long long mincost = min(cost1 + 1LL * cost2, 1LL * costBoth);
        long long n = min(need1, need2);

        long long totalcost = 0;

        if (mincost == costBoth) {

            totalcost = n * 1LL * costBoth;

            need1 -= n;
            need2 -= n;

            if (need1) {
                totalcost += need1 * 1LL * min(cost1, costBoth);
            }
            else {
                totalcost += need2 * 1LL * min(cost2, costBoth);
            }

        }
        else {
            totalcost += need1 * 1LL * cost1;
            totalcost += need2 * 1LL * cost2;
        }

        // // Consider buying extra combined items
        // long long extra = max(need1 + n, need2 + n) * 1LL * costBoth;

        return totalcost;
    }
};