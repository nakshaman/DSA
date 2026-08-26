#include <iostream>
using namespace std;
int main()
{
    string name("naksh");
    int len = name.size();
    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << name[i] << " ";
    }
    return 0;
}