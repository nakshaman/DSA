#include <iostream>
#include <vector>
using namespace std;
void missingRepeatingNumber(vector<int> arr)
{
    int n = arr.size();
    vector<int> hash(n, 0);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int repeating = -1;
    int missing = -1;
    for (int i = 1; i < hash.size(); i++)
    {
        if (hash[i] == 2)
        {
            repeating = i;
        }
        if (hash[i] == 0)
        {
            missing = i;
        }
        if (repeating != -1 && missing != -1)
        {
            break;
        }
    }
    cout << repeating << endl;
    cout << missing << endl;
}
vector<int> missingRepeatingNumberOptimal(vector<int> arr)
{
    int xore = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        xore ^= arr[i];
    }
    int bitNo = 0;
    while (1)
    {
        if ((xore & (1 << bitNo)) != 0)
        {
            break;
        }
        bitNo++;
    }
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & (1 << bitNo)) != 0)
        {
            one ^= arr[i];
        }
        else
        {
            zero ^= arr[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if ((i & (1 << bitNo)) != 0)
        {
            one ^= i;
        }
        else
        {
            zero ^= i;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == zero)
        {
            cnt++;
        }
    }
    if (cnt == 2)
        return {zero, one};
    else
        return {one, zero};
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
    vector<int> ans = missingRepeatingNumberOptimal(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}