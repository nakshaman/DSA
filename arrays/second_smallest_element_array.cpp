#include <iostream>
using namespace std;
void secondSmallestElementBrute()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int smallest = arr[0];
    int secondSmallest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != smallest)
        {
            secondSmallest = arr[i];
            break;
        }
    }
    cout << secondSmallest << endl;
}
void secondSmallestElementOptimal()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }
    cout << secondSmallest << endl;
}
int main()
{
    // secondSmallestElementBrute();
    secondSmallestElementOptimal();
    return 0;
}