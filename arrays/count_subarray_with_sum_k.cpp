#include <iostream>
using namespace std;
int countSubarrayWithSumKBrute(vector<int> arr)
{
    int target = 6;
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int xore = 0;
            for (int k = i; k <= j; k++)
            {
                xore ^= arr[k];
            }
            if (xore == target)
            {
                count++;
            }
        }
    }
    return count;
}
int countSubarrayWithSumKBetter(vector<int> arr)
{
    int n = arr.size();
    int target = 6;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int xore = 0;
        for (int j = i; j < n; j++)
        {
            xore ^= arr[j];
            if (xore == target)
            {
                count++;
            }
        }
    }
    return count;
}
int countSubarrayWithSumKOptimal(vector<int> arr)
{
    int n = arr.size();
    int k = 6;
    unordered_map<int, int> mpp;
    int count = 0;
    int xore = 0;
    mpp[xore]++;
    for (int i = 0; i < n; i++)
    {
        xore ^= arr[i];
        int x = xore ^ k;
        count += mpp[x];
        mpp[xore]++;
    }
    return count;
    // Tc -> 0(n) nlogn if map used. in ordered_map best and average will be 0(1) else for worst 0(n)
    // Sc -> 0(n)
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
    cout << countSubarrayWithSumKOptimal(arr);
    return 0;
}