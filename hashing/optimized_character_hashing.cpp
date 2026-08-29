#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    vector<int> hash(27, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash[arr[i] - 'a'] += 1;
    }
    cout << "Enter number of queries you have ?" << endl;
    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        cout << hash[ch - 'a'] << endl;
    }

    return 0;
}

// For Capital characters

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char arr[n];
//     vector<int> hash(27, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         hash[arr[i] - 'A'] += 1;
//     }
//     cout << "Enter number of queries you have ?" << endl;
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         char ch;
//         cin >> ch;
//         cout << hash[ch - 'A'] << endl;
//     }

//     return 0;
// }