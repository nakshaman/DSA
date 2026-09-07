#include <iostream>
using namespace std;
void print(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void moveZeroToEndOptimal()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // 1 0 1 2 2 0 2 0 2
    // we will keep two pointer one on the index where
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (v[i] != 0)
        {
            swap(v[i], v[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
void moveZeroToEndBrute()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> temp;
    int countZero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
        else
        {
            countZero++;
        }
    }
    for (int i = 0; i < countZero; i++)
    {
        temp.push_back(0);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    print(arr);
}
int main()
{
    // moveZeroToEndOptimal();
    moveZeroToEndBrute();
    return 0;
}