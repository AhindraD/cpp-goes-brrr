#include <iostream>
using namespace std;

long long print_factorial(int n)
{
    long long fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;
    long long res = print_factorial(n);
    cout << res << endl;
}