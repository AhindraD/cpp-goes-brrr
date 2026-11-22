#include <iostream>
using namespace std;

int count_zeroes(long long n)
{
    int count = 0;
    if (n == 0)
    {
        return 1;
    }
    for (long long i = n; i > 0; i /= 10)
    {
        if (i % 10 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    long long n;
    cin >> n;
    cout << count_zeroes(n);
}