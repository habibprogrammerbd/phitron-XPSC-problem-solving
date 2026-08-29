#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 0; i < (int)s.size() - 1;)
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
            }
            else
            {
                i++;
            }
        }

        // for (char x : s)
        //     cout << x << " ";
        // cout << s.size();
        if (k >= (int)s.size() - 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}