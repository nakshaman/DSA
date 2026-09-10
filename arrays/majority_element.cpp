#include <iostream>
using namespace std;

int majorityElementBrute(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int countFreq = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                countFreq++;
                if (countFreq > (n / 2))
                {
                    return nums[i];
                }
            }
        }
    }
    return -1;
}
int majorityElementBetter(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums[0];
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]] += 1;
    }
    for (auto it : mpp)
    {
        if (it.second > (n / 2))
        {
            return it.first;
        }
    }
    return -1;
}
int majorityElementOptimal(vector<int> &nums)
{
    int n = nums.size();
    int ele = nums[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            ele = nums[i];
            count++;
        }
        else if (nums[i] == ele)
            count++;
        else
            count--;
    }
    int countAns = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == ele)
        {
            countAns++;
        }
    }
    if (countAns > (n / 2))
        return ele;
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << majorityElementOptimal(nums);
    return 0;
}