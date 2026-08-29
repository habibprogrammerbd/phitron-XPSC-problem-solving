#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    auto it = unique(s.begin(), s.end());
    s.erase(it, s.end());
    string s2;
    for (int i = 'a'; i <= 'z'; i++)
    {
        s2 = s2 + char(i);
    }
    string ans;
    bool x = false;
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] != s2[i])
        {
            ans = s2[i];
            x = true;
            break;
        }
    }
    if (x == true)
        cout << ans << endl;
    else
        cout << "None\n";

    return 0;
}