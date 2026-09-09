#include <iostream>
using namespace std;

void findNumberThatAppearOnceOptimal()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr ^= arr[i];
    }
    cout << xorr << endl;
    // TC -> 0(n) , SC -> 0(1)
}
void findNumberThatAppearOnceBetter()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = *(max_element(arr.begin(), arr.end()));
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[i] == 1)
        {
            cout << i << endl;
            break;
        }
    }
    // TC -> 0(2n) , SC -> 0(n)
}
void findNumberThatAppearOnceBrute()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << num << endl;
            break;
        }
    }
    // TC -> 0(n2) , SC -> 0(1)
}

int main()
{
    // findNumberThatAppearOnceOptimal();
    // findNumberThatAppearOnceBetter();
    findNumberThatAppearOnceBrute();
    return 0;
}