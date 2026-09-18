#include <iostream>
#include <set>
using namespace std;
void threeSumBrute(vector<int> &arr)
{
    int n = arr.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    for (auto it : ans)
    {
        for (auto x : it)
        {
            cout << x << " ";
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
    cout << "-------" << endl;
    threeSumBrute(arr);
    return 0;
}