#include <iostream>
using namespace std;

int reversePairsBrute(vector<int> arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > 2 * arr[j])
            {
                count++;
            }
        }
    }
    return count;
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
    cout << reversePairsBrute(arr);
    return 0;
}