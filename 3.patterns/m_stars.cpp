#include <iostream>
using namespace std;

int main()
{
    int a, m;
    cin >> a >> m;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}