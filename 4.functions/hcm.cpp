#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    int res = 1;
    for (int i = b; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            res = i;
            return res;
        }
    }
    return res;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int res = 1;
    if (m == n)
    {
        res = m;
    }
    else if (m > n)
    {
        res = hcf(m, n);
    }
    else
    {
        res = hcf(n, m);
    }
    cout << res;
}