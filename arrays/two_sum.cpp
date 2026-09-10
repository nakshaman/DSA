#include <iostream>
using namespace std;

void twoSumBrute(vector<int> nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                continue;
            }
            else if (nums[i] + nums[j] == target)
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}
void twoSumBetterOptimalWhenSorted(vector<int> nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (nums[left] + nums[right] == target)
        {
            cout << left << " " << right << endl;
            return;
        }
        else if (nums[left] + nums[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}
void twoSumOptimalWithUnsorted(vector<int> nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int rem = target - nums[i];
        if (mpp.find(rem) != mpp.end())
        {
            if (mpp[rem] < i)
            {
                cout << mpp[rem] << " " << i << endl;
            }
            else
            {
                cout << i << " " << mpp[rem] << endl;
            }
            break;
        }
        mpp[nums[i]] = i;
    }
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
    int target;
    cout << "Enter the target : ";
    cin >> target;
    // twoSumBrute(nums, target);
    // twoSumBetter(nums, target);
    twoSumOptimalWithUnsorted(nums, target);
    return 0;
}