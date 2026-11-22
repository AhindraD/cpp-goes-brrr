#include <iostream>
using namespace std;

void print_line(int n, string ch)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << ch << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print_line(n, "I am learning functions");
}