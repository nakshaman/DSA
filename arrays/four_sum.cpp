#include <iostream>
#include <set>
using namespace std;
void fourSumBrute(vector<int> &arr)
{
    set<vector<int>> s;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == 0)
                    {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        sort(temp.begin(), temp.end());
                        s.insert(temp);
                    }
                }
            }
        }
    }
    cout << "-----------" << endl;
    for (auto it : s)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void fourSumBetter(vector<int> arr)
{
    int n = arr.size();
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<int> hash;
            for (int k = j + 1; k < n; k++)
            {
                int fourth = 0 - (arr[i] + arr[j] + arr[k]);
                if (hash.find(fourth) != hash.end())
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], fourth};
                    sort(temp.begin(), temp.end());
                    s.insert(temp);
                }
                hash.insert(arr[k]);
            }
        }
    }
    for (auto it : s)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void fourSumOptimal(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int target = 8;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j != i + 1 && arr[j] == arr[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if (sum < target)
                    k++;
                else if (sum > target)
                    l--;
                else
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && arr[k] == arr[k - 1])
                        k++;
                    while (k < l && arr[l] == arr[l + 1])
                        l--;
                }
            }
        }
    }
    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
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
    fourSumOptimal(arr);
    return 0;
}