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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 1;
        bool x = false, y = false;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1] )
            {
               count++;
            }
        }

        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] != s[i - 1] && s[i] != s[i + 1])
            {
                x = true;
                if (s[i - 1] == s[i + 1])
                {
                    y = true;
                }
            }
        }

        if (y)
            cout << count - 2 << endl;
        else if (x)
            cout << count - 1 << endl;
        else
            cout << count << endl;
    }

    return 0;
}