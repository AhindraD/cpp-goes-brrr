#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j > a - i)
            {
                if (j == a)
                {
                    cout << "*";
                }
                else if (j == a - i + 1 || i == a)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}