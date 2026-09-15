#include <iostream>
using namespace std;
void rotateMatrix(vector<vector<int>> arr, int n, int m)
{
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(ans[i].begin(), ans[i].end());
    }
    cout << "---------------" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    rotateMatrix(arr, n, m);
    return 0;
}