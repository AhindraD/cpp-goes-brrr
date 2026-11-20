#include <iostream>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    if (num == 0)
    {
        cout << "YES";
    }
    else
    {
        long long rev = 0;
        for (long long i = num; i > 0; i /= 10)
        {
            rev = (rev * 10) + (i % 10);
            // cout << (i % 10);
        }
        if (rev == num)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}