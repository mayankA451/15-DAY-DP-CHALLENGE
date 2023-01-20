class Solution
{
public:
    // Optimized Approach Using DP
    int fibbo(int n, vector<int> &dp)
    {
        if (n == 1 || n == 0)
        {
            return n;
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }

        dp[n] = fibbo(n - 1, dp) + fibbo(n - 2, dp);
        return dp;
    }

    int fib(int n)
    {

        vector<int> dp(n + 1, -1);
        return fibbo(n, dp);
    }
};