#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;

        int i = 0, j = 0, cou1 = 0, cou2 = 0;
        bool flag = true;

        while (i < s1.size() && j < s2.size())
        {
            char x = s1[i];
            while (i < s1.size() && x == s1[i])
            {
                cou1++;
                i++;
            }

            char y = s2[j];

            while (j < s2.size() && y == s2[j])
            {
                cou2++;
                j++;
            }

            if (x != y || cou1 > cou2 || cou2 > cou1 * 2)
            {
                flag = false;
                break;
            }
            cou1 = 0, cou2 = 0;
        }

        if(i < s1.size() || j < s2.size()) flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}