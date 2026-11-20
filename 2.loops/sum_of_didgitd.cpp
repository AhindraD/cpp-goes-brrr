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
        long long sum = 0;
        for (long long i = num; i > 0; i /= 10)
        {
            sum = (sum) + (i % 10);
            // cout << (i % 10);
        }
        cout << sum;
    }
}