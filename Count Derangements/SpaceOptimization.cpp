#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prev2 = 0;
    int prev1 = 1;

    for (int i = 3; i <= n; i++)
    {
        int ans = (i - 1) * (prev1 + prev2);
        prev2 = prev1;
        prev1 = ans;
    }

    cout << prev1 << endl;

    return 0;
}