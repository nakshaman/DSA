#include <iostream>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int maxi = (*max_element(nums.begin(), nums.end()));
    vector<int> hash(maxi+1, 0);
    for (int i = 0; i < hash.size(); i++)
    {
        hash[nums[i]] += 1;
    }
    int maxLimit = nums.size() / 2;
    cout << maxLimit << endl;
    int ans = -1;
    for (int i = 0; i <= maxi; i++)
    {
        if (hash[i] >= maxLimit)
        {
            ans = i;
            break;
        }
    }
    return ans;
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
    cout << majorityElement(nums);
    return 0;
}