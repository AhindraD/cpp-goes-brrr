#include <iostream>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    if (num == 0)
    {
        cout << num;
    }
    else
    {
        long long rev = 0;
        for (long long i = num; i > 0; i /= 10)
        {
            rev = (rev * 10) + (i % 10);
            // cout << (i % 10);
        }
        cout << rev;
    }
}