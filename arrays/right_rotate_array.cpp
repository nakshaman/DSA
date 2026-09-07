#include <iostream>
using namespace std;
void printArray(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void rightRotateArrayBetter()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    d = d % n;
    vector<int> temp(d, 0);
    for (int i = n - d; i < n; i++)
    {
        temp[i - (n - d)] = arr[i];
    }
    for (int i = n - d - 1; i >= 0; i--)
    {
        arr[i + d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[i] = temp[i];
    }
    printArray(arr);
}
void rightRotateArrayOptimal()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    d = d % n;
    reverse(arr.begin() + (n - d), arr.end());
    reverse(arr.begin(), arr.begin() + (n - d));
    reverse(arr.begin(), arr.end());
    printArray(arr);
    // TC -> 0(2n) SC -> 0(1)
}
int main()
{
    // rightRotateArrayOptimal();
    rightRotateArrayBetter();
    return 0;
}