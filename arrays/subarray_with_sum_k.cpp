#include <iostream>
using namespace std;
void subarrayWithSumKCountBetter(vector<int> arr, int target)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    // TC ->0(n2) SC -> 0(1)
}
int subarrayWithSumKCountOptimal(vector<int> arr, int target)
{
    int n = arr.size();
    int sum = 0;
    int count = 0;
    unordered_map<int, int> mpp;
    // mpp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == target)
            count++;
        int rem = sum - target;
        if (mpp.find(rem) != mpp.end())
        {
            count += mpp[rem];
        }
        mpp[sum] += 1;
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
    int target;
    cin >> target;
    cout << subarrayWithSumKCountOptimal(arr, target);
    return 0;
}