#include <iostream>
using namespace std;
void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void leftRotateByDPlace()
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
    vector<int> v(d, 0);
    for (int i = 0; i < d; i++)
    {
        v[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++)
    {
        arr[i] = arr[d + i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = v[i];
    }
    printArray(arr, n);
}
void leftRotateOptimal()
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
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
    printArray(arr, n);
}
int main()
{
    // leftRotateByDPlace();
    leftRotateOptimal();
    return 0;
}