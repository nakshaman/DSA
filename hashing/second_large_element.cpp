#include <iostream>
using namespace std;
int secondMostFrequentElement(vector<int> &nums)
{
    int maxi = (*max_element(nums.begin(), nums.end()));
    vector<int> v(maxi + 1, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        v[nums[i]] += 1;
    }
    int maxEle = -1;
    int maxFreq = 0;
    int secondEle = -1;
    int secondMaxFreq = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > maxFreq)
        {
            secondEle = maxEle;
            secondMaxFreq = maxFreq;
            maxEle = i;
            maxFreq = v[i];
        }
        else if (v[i] > secondMaxFreq && v[i] != maxFreq)
        {
            secondEle = i;
            secondMaxFreq = v[i];
        }
    }
    return secondEle;
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in the vector : " << endl;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << secondMostFrequentElement(nums) << endl;

    return 0;
}