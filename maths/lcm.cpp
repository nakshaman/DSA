#include <iostream>
using namespace std;
int main()
{
    int n1 = 1000;
    int n2 = 999;
    if (n1 == 1 && n2 == 1)
        return 1;

    int maxi = max(n1, n2);
    int mini = min(n1, n2);
    int maxOfTwo = max(n1, n2);
    int minOfTwo = min(n1, n2);

    if (maxOfTwo % minOfTwo == 0)
    {
        return maxi;
    }
    for (int i = 2; i <= minOfTwo; i++)
    {
        int maxis = maxOfTwo * i;
        cout << maxis << endl;
        if (maxis % minOfTwo == 0)
        {
            return maxis * i;
        }
    }
    return 0;
    return 0;
}