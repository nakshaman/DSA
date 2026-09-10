#include <iostream>
using namespace std;
void rearrangeBySign(vector<int> arr)
{
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            positive.push_back(arr[i]);
        else
            negative.push_back(arr[i]);
    }
    
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
    rearrangeBySign(arr);
    return 0;
}