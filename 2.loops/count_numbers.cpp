#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    int even = 0;
    int odd = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if (temp > 0)
        {
            pos++;
        }
        else if (temp < 0)
        {
            neg++;
        }
        if (temp % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << pos << endl
         << neg << endl
         << even << endl
         << odd << endl;
}