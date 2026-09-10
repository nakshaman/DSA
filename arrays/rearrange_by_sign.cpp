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
void rearrangeBySignBrute(vector<int> arr)
{
    int n = arr.size();
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive.push_back(arr[i]);
        else
            negative.push_back(arr[i]);
    }
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = positive[pos];
            pos++;
        }
        else
        {
            arr[i] = negative[neg];
            neg++;
        }
    }
    printArray(arr);
}
void rearrangeBySignOptimal(vector<int> arr)
{
    int n = arr.size();
    int pos = 0, neg = 1;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[pos] = arr[i];
            pos += 2;
        }
        else
        {
            ans[neg] = arr[i];
            neg += 2;
        }
    }

    printArray(ans);
}
void extraElements(vector<int> arr)
{
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[i * 2] = pos[i];
            arr[i * 2 + 1] = neg[i];
        }
        int index = 2 * neg.size();
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int index = 2 * pos.size();
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }
    printArray(arr);
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
    extraElements(arr);
    return 0;
}