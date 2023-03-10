class Solution
{
public:
    // Bottom Up Approach
    int rob(vector<int> &nums)
    {
        int n = nums.size();

        int prev2 = 0;
        int prev1 = nums[0];

        for (int i = 1; i < n; i++)
        {
            int incl = prev2 + nums[i];
            int exc = prev1 + 0;
            int ans = max(incl, exc);

            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
};