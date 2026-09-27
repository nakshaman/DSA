#include <iostream>
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
void missingRepeatingNumberOptimal(vector<int> arr){
    
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
    missingRepeatingNumber(arr);
    return 0;
}