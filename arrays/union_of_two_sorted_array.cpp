#include <iostream>
#include <set>
using namespace std;
void printArray(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void unionOfTwoOptimal()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n, 0);
    vector<int> v2(m, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (v1[i] <= v2[j])
        {
            if (ans.size() == 0 || ans.back() != v1[i])
            {
                ans.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != v2[j])
            {
                ans.push_back(v2[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (ans.size() == 0 || ans.back() != v1[i])
        {
            ans.push_back(v1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (ans.size() == 0 || ans.back() != v2[j])
        {
            ans.push_back(v2[j]);
        }
        j++;
    }
    printArray(ans);
}

void unionOfTwoBrute()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n, 0);
    vector<int> v2(m, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    set<int> s;
    for (auto it : v1)
    {
        s.insert(it);
    }
    for (auto it : v2)
    {
        s.insert(it);
    }
    for (auto ele : s)
    {
        cout << ele << " ";
    }
    cout << endl;
    // TC->0(2n)
    // SC-> 0(2n)
}
int main()
{
    // unionOfTwoOptimal();
    unionOfTwoBrute();
    return 0;
}