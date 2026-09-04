#include <iostream>
using namespace std;

int printTill(int n, int sum)
{
    if (n == 0)
        return;
    return printTill(n - 1, n + sum);
}

int main()
{
    int n = 7;
    int sum = 0;
    cout << printTill(n, sum);
    return 0;
}