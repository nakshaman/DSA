#include <iostream>
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
void leaderInArrayBrute(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            ans.push_back(arr[i]);
        }
    }
    printArray(ans);
    // TC -> 0(n2) SC -> 0(1)
}
void leaderInArrayOptimal(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            ans.push_back(maxi);
        }
    }
    reverse(ans.begin(), ans.end());
    printArray(ans);
    // TC -> 0(n) SC -> 0(1)
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
    leaderInArrayBrute(arr);
    return 0;
}