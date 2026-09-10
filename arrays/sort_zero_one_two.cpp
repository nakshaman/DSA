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
void sortZeroOneTwoBrute(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    // TC -> (nlogn) SC -> 0(1)
}
void sortZeroOneTwoBetter(vector<int> arr)
{
    int n = arr.size();
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        else if (arr[i] == 1)
        {
            countOne++;
        }
        else if (arr[i] == 2)
        {
            countTwo++;
        }
    }
    for (int i = 0; i < countZero; i++)
    {
        arr[i] = 0;
    }
    for (int i = countZero; i < countZero + countOne; i++)
    {
        arr[i] = 1;
    }
    for (int i = countZero + countOne; i < n; i++)
    {
        arr[i] = 2;
    }
    printArray(arr);
}
void sortZeroOneTwoOptimal(vector<int> arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    printArray(arr);
    // TC -> 0(n) SC -> 0(1)
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortZeroOneTwoOptimal(arr);
    return 0;
}