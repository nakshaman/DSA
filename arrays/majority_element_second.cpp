#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
void majorityElementSecondBrute(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                if (count > n / 3 && ans.back() != arr[i] || ans.size() == 0)
                {
                    ans.push_back(arr[i]);
                    break;
                }
            }
            if (ans.size() == 2)
                break;
        }
    }
    printArray(ans);
    // TC -> 0(n2) SC -> 0(1)
}
void majorityElementSecondBetter(vector<int> arr)
{
    int n = arr.size();
    unordered_map<int, int> mpp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
    }
    for (auto it : mpp)
    {
        if (it.second > n / 3)
        {
            ans.push_back(it.first);
        }
    }
    reverse(ans.begin(), ans.end());
    printArray(ans);
    // TC -> logn SC -> 0(n)
    // for best and average tc will be 0(1)
}
void majorityElementSecondBetter2(vector<int> arr)
{
    int n = arr.size();
    unordered_map<int, int> mpp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
        if (mpp[arr[i]] > n / 3)
        {
            ans.push_back(arr[i]);
        }
    }
    printArray(ans);
}
void majorityElementSecondOptimal(vector<int> arr)
{
    int n = arr.size();
    int countOne = 0, countTwo = 0;
    int eleOne = -1, eleTwo = -1;
    for (int i = 0; i < n; i++)
    {
        if (countOne == 0 && arr[i] != eleTwo)
        {
            countOne = 1;
            eleOne = arr[i];
        }
        else if (countTwo == 0 && arr[i] != eleOne)
        {
            countTwo = 1;
            eleTwo = arr[i];
        }
        else if (arr[i] == eleOne)
        {
            countOne++;
        }
        else if (arr[i] == eleTwo)
        {
            countTwo++;
        }
        else
        {
            countOne--;
            countTwo--;
        }
    }
    cout << eleOne << " " << eleTwo << endl;
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
    majorityElementSecondOptimal(arr);
    return 0;
}