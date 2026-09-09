#include <iostream>
#include <map>
using namespace std;

void longestSubarrayWithSumKBrute()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum == x)
            {
                length = max(length, j - i + 1);
            }
        }
    }
    cout << length << endl;
    // TC -> 0(n3) , SC -> 0(1)
}
void longestSubarrayWithSumKBruteBetter()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == x)
            {
                length = max(length, j - i + 1);
            }
        }
    }
    cout << length << endl;
    // TC -> 0(n2) , SC -> 0(1)
}
void longestSubarrayWithSumKBetter()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    map<long long, int> preSum;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSum.find(rem) != preSum.end())
        {
            int len = i - preSum[rem];
            maxLen = max(maxLen, len);
        }
        if (preSum.find(sum) == preSum.end())
        {
            preSum[sum] = i;
        }
    }
    cout << maxLen << endl;
    // TC -> 0(nlogn) for ordered map and for unordered and if no collision 0(n) because unoredered map takes 0(1)
    // SC -> 0(1)
}
void longestSubarrayWithSumKOptimal()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int left = 0, right = 0;
    long long sum = arr[0]; // first mistake
    int maxLen = 0;
    while (right < n)
    {
        while (sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += arr[right];
    }
    cout << maxLen << endl;
}
int main()
{
    longestSubarrayWithSumKOptimal();
    return 0;
}