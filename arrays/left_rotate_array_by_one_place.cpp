#include <iostream>
using namespace std;
void leftRotateByOnePlaceBrute()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int temp = v[0];
    for (int i = 1; i < n; i++)
    {
        v[i - 1] = v[i];
    }
    v[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    leftRotateByOnePlaceBrute();
    return 0;
}