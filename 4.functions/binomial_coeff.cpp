#include <iostream>
using namespace std;

long long factorial(int n)
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
    int n, r;
    cin >> n >> r;
    long long fact_n = factorial(n);
    long long fact_r = factorial(r);
    long long fact_nr = factorial(n - r);
    long long res = (fact_n) / (fact_r * fact_nr);
    cout << res;
}