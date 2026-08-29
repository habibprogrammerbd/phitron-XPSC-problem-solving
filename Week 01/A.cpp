#include <bits/stdc++.h>
using namespace std;
// test trigger
int main()
{
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == 'A')
        {
            ans = ans + "A";
        }
        else
        {
            ans = ans + ".";
        }
    }

    cout << ans << endl;
    return 0;
}
