#include <iostream>
using namespace std;
bool checkSorted()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
            break;
        }
    }
    return true;
}
bool checkSortedAnother()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    // bool ans = checkSorted();
    bool ans = checkSortedAnother();
    cout << ans << endl;
    return 0;
}