#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(int n, vector<int> &dp)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = (n - 1) * (count(n - 2, dp) + count(n - 1, dp));

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);

    cout << count(n, dp) << endl;

    return 0;
}