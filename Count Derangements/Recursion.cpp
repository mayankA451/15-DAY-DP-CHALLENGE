#include <iostream>
using namespace std;

int count(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int ans = (n - 1) * (count(n - 2) + count(n - 1));

    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << count(n) << endl;

    return 0;
}