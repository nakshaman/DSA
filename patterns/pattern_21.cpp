#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter for how many numbers you want to print : ";
    cin >> n;
    int row = 2 * n - 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            int top = i;
            int bottom = 2 * n - 2 - i;
            int right = 2 * n - 2 - j;
            int left = j;
            int val = n - min({top, bottom, right, left});
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}