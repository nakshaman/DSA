#include <iostream>
#include <set>
using namespace std;
void removeDuplicateFromSortedArrayBrute()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
}
void removeDuplicateFromSortedArrayOptimal()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (v[i] != v[j])
        {
            v[i + 1] = v[j];
            i++;
        }
    }
    cout << i + 1 << endl;
}
void removeDuplicateFromSortedArrayBetter()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
int main()
{
    // removeDuplicateFromSortedArrayBetter();
    removeDuplicateFromSortedArrayOptimal();
    return 0;
}
