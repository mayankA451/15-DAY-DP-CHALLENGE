class Solution
{
public:
    // Recursion Approach
    int solve(vector<int> &nums, int n)
    {
        if (n < 0)
        {
            return 0;
        }
        if (n == 0)
        {
            return nums[0];
        }

        int inc = solve(nums, n - 2) + nums[n];
        int exc = solve(nums, n - 1) + 0;

        return max(inc, exc);
    }

    int rob(vector<int> &nums)
    {
        int n = nums.size();
        int ans = solve(nums, n - 1);
        return ans;
    }
};