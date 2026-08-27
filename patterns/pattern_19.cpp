#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int gap = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < gap; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << gap << endl;
        gap += 2;
        cout << endl;
    }
    gap = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < gap; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << gap << endl;
        gap -= 2;
        cout << endl;
    }
    return 0;
}