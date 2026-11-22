#include <iostream>
using namespace std;

bool if_prime(int n)
{
    int count = 0;
    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count == 2;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (if_prime(i))
        {
            cout << i << " ";
        }
    }
}