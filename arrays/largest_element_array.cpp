#include <iostream>
using namespace std;
void largestElement()
{
    int n;
    cin >> n;
    int arr[n];
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << maxi << endl;
}
void largestElementSorting()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n - 1] << endl;
}
int main()
{
    // largestElement();
    largestElementSorting();
    return 0;
}