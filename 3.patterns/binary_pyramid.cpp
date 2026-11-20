#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int temp = 0;
        if (i % 2 == 0)
        {
            temp = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << temp;
            if (temp == 0)
            {
                temp = 1;
            }
            else if (temp == 1)
            {
                temp = 0;
            }
        }
        cout << endl;
    }
}