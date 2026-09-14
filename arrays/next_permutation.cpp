#include <iostream>
#include <algorithm>
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
void nextPermutationBetter(vector<int> arr)
{
    next_permutation(arr.begin(), arr.end());
    printArray(arr);
    // TC -> 0(n) SC_> 0(1)
}
void nextPermutationOptimalApproach(vector<int> arr)
{
    int n = arr.size();
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        for (int i = n - 1; i >= index; i--)
        {
            if (arr[i] > arr[index])
            {
                swap(arr[i], arr[index]);
                break;
            }
        }
        reverse(arr.begin() + index + 1, arr.end());
    }
    printArray(arr);
    // TC -> 0(n). SC -> (1)
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
    nextPermutationOptimalApproach(arr);
    return 0;
}