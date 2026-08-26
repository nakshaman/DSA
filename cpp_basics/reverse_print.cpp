#include <iostream>
using namespace std;
int main()
{
    for (int i = 10; i > 0; i--)
    {
        if (i % 2 == 0)
            cout << i << endl;
        else
            continue;
    }
    return 0;
}