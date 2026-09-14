#include <iostream>
#include <unordered_set>
using namespace std;
bool ls(vector<int> arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
void longestConsecutiveSequenceBrute(vector<int> arr)
{
    if (arr.size() == 0)
    {
        cout << 1 << endl;
        return;
    }
    int n = arr.size();
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i] + 1;
        int count = 1;
        while (ls(arr, x))
        {
            count++;
            longest = max(longest, count);
            x = x + 1;
        }
    }
    cout << longest << endl;
}
int longestConsecutiveSequenceBetter(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int lastSmaller = INT_MIN;
    int longest = 1;
    int current_count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            current_count++;
            lastSmaller = arr[i];
        }
        else if (arr[i] == lastSmaller)
        {
            continue;
        }
        else if (arr[i] != lastSmaller)
        {
            lastSmaller = arr[i];
            current_count = 1;
        }
        longest = max(longest, current_count);
    }
    return longest;
}
int longestConsecutiveSequenceOptimal(vector<int> arr)
{
    int n = arr.size();
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x=it;
            while (st.find(x + 1) != st.end())
            {
                x=x+1;
                count++;
                longest = max(longest, count);
            }
        }
    }
    return longest;
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
    cout << longestConsecutiveSequenceOptimal(arr);
    return 0;
}