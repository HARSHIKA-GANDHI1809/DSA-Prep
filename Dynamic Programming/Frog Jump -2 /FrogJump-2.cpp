class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        if (stones[1] != 1) return false;
        unordered_map<int, unordered_set<int>> dp;
        
        for (int stone : stones) {
            dp[stone] = unordered_set<int>();
        }
        dp[stones[0]].insert(0);
        for (int i = 0; i < n; i++) {
            int currStone = stones[i];
            for (int k : dp[currStone]) {
                for (int nextJump : {k - 1, k, k + 1}) {
                    if (nextJump > 0) {
                        int nextPos = currStone + nextJump;
                        if (dp.count(nextPos)) {
                            dp[nextPos].insert(nextJump);
                        }
                    }
                }
            }
        }
        return !dp[stones.back()].empty();
    }
};
