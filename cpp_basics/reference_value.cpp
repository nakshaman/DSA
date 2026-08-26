#include <iostream>
using namespace std;

// pass by value
// void increaseValue(int x)
// {
//     x++;
//     cout << x << endl;
// }

// pass by refrence
void increaseValue(int &x)
{
    x++;
    cout << x << endl;
}
int main()
{
    int x = 7;
    cout << x << endl;
    increaseValue(x);
    cout << x << endl;
    return 0;
}