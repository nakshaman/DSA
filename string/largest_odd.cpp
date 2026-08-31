#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = -1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        char last = s[i];
        cout << "last is " << last << endl;
        if (int(last) % 2 == 1)
        {
            ans = i;
            cout << "ans is " << ans << endl;
            break;
        }
    }
    cout << s.substr(0, ans + 1) << endl;
    return 0;
}