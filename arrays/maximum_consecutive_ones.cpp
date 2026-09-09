#include <iostream>
using namespace std;

void findMaximumConsecutiveOnes()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int countMaxOnes = 0;
    int currentCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            currentCount++;
            countMaxOnes = max(countMaxOnes, currentCount);
        }
        else
        {
            currentCount = 0;
        }
    }
    cout << countMaxOnes << endl;
    // TC -> 0(n) , SC -> 0(1)
}

int main()
{
    findMaximumConsecutiveOnes();
    return 0;
}