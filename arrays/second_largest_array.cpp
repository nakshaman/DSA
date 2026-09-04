#include <iostream>
using namespace std;
void secondLargestElement()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << secondLargest << endl;
    // TC -> 0(n)
}
void secondLargestElementSorting()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int largest = arr[n - 1];
    int secondLargest = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            secondLargest = arr[i];
            break;
        }
    }
    cout << secondLargest << endl;
    // TC-> n(logn) due to sorting
    // SC-> 0(1)
}
void secondLargestElementWithoutSorting()
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
    int secondMaxi = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondMaxi && arr[i] != maxi)
        {
            secondMaxi = arr[i];
        }
    }
    cout<<secondMaxi<<endl;
}
int main()
{
    // secondLargestElement();
    // secondLargestElementSorting();
    secondLargestElementWithoutSorting();
    return 0;
}