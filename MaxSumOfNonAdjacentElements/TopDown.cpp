class Solution
{
public:
    // Top Down Approach
    int solve(vector<int> &nums, int n, vector<int> &dp)
    {
        if (n < 0)
        {
            return 0;
        }
        if (n == 0)
        {
            return nums[0];
        }

        if (dp[n] != -1)
        {
            return dp[n];
        }
        dp[n] = max((solve(nums, n - 2, dp) + nums[n]), (solve(nums, n - 1, dp) + 0));
        return dp[n];
    }

    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        int ans = solve(nums, n - 1, dp);
        return ans;
    }
};