#include <vector>
#include <unordered_map>

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int total_count = 0;
        int n = nums.size();
        std::vector<std::unordered_map<long long, int>> dp(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                long long diff = static_cast<long long>(nums[i]) - static_cast<long long>(nums[j]);

                if (diff >= INT_MIN && diff <= INT_MAX) {
                    int diff_int = static_cast<int>(diff);
                    dp[i][diff_int] += 1;
                    dp[i][diff_int] += dp[j][diff_int];
                    total_count += dp[j][diff_int];
                }
            }
        }

        return total_count;
    }
};