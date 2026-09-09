#include <iostream>
using namespace std;

void findMissingNumberOptimal()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    int total = (n * (n + 1)) / 2;
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        arraySum += arr[i];
    }
    cout << total - arraySum << endl;
}
void findMissingNumberBrute()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    int j = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != j)
        {
            break;
        }
        j++;
    }
    cout << j << endl;
}
void findMissingNumberBetter()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    vector<int> hash(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        hash[arr[i]] += 1;
    }
    for (int i = 1; i < hash.size(); i++)
    {
        if (hash[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
}

int main()
{
    findMissingNumberBetter();
    return 0;
}