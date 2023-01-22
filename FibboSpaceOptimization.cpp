#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prev1 = 1;
    int prev2 = 0;

    if (n == 0)
    {
        return prev2;
    }

    for (int i = 2; i < n; i++)
    {
        /* code */
        int curr = prev1 + prev2;
        prev1 = curr;
        prev2 = prev1;
    }

    cout << prev1 << endl;

    return 0;
}