#include <iostream>
using namespace std;
int printSum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int res_one = printSum(a, b);
    int res_two = printSum(x, y);
    cout << res_one << " " << res_two << endl;

    return 0;
}