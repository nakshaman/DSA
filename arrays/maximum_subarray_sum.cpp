#include <iostream>
using namespace std;
int maximumSubarraySum(vector<int> arr)
{
    int n = arr.size();
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
int maxSubarraySumOptimal(vector<int> nums)
{
    int maxSum = INT_MIN;
    int n = nums.size();
    int sum = 0;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (maxSum < sum)
        {
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
            start = i;
        }
    }
    cout << "Ans start from " << ansStart << " and end at " << ansEnd << endl;
    return maxSum;
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
    cout << maxSubarraySumOptimal(arr);
    return 0;
}