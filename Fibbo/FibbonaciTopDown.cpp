#include <iostream>
using namespace std;
#include <vector>

int fib(int n, vector<int> &dp)
{
    // Base Case
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, -1);
    // for (int i = 0; i < n; i++)
    // {
    //     dp[i] = -1;
    // }

    cout << fib(n, dp) << endl;

    return 0;
}