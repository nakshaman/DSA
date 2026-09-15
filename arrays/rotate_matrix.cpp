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
void rotateMatrixOptimal(vector<vector<int>> arr, int n, int m)
{
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= m - 1; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
    cout << "---------------" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
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
    rotateMatrixOptimal(arr, n, m);
    return 0;
}