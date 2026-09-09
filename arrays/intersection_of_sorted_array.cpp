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
void intersectionOfTwoSortedArray()
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
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (v1[i] == v2[j])
        {
            ans.push_back(v1[i]);
            i++;
            j++;
        }
        else if (v1[i] < v2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    printArray(ans);
}

int main()
{
    intersectionOfTwoSortedArray();
    return 0;
}