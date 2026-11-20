#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    long long pow = 1;
    for (int i = n; i >= 1; i--)
    {
        pow *= m;
    }
    cout << pow;
}