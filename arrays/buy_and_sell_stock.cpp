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
void buyAndSellStocksReverseTraversal(vector<int> arr)
{
    int n = arr.size();
    int maxRight = arr[n - 1];
    int maxDiff = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxRight)
        {
            maxRight = arr[i];
        }
        int currentDiff = maxRight - arr[i];
        maxDiff = max(maxDiff, currentDiff);
    }
    cout << maxDiff << endl;
}
void buyAndSellStocksNormalTraversal(vector<int> arr){
    
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
    buyAndSellStocksNormalTraversal(arr);
    return 0;
}