#include <iostream>
using namespace std;
void mergeWithoutExtraSpace(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(arr2[j]);
        j++;
    }
    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            arr1[i] = ans[i];
        else
            arr2[i - n] = ans[i];
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < arr2.size(); j++)
    {
        cout << arr2[j] << " ";
    }
    cout << endl;
}
void mergeWithoutExtraSpaceOptimal(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m)
    {
        if (arr1[left] > arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else
        {
            break;
        }
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            cout << arr1[i];
        else
            cout << arr2[i - n];
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n, 0);
    vector<int> arr2(m, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    mergeWithoutExtraSpace(arr1, arr2);
    return 0;
}