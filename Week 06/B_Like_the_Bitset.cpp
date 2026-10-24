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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0, r = 0, x = n, y = 1;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                ans[i] = x;
                x--;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                ans[i] = y;
                y++;
            }
        }

        int count = 0;

        bool con = true;
        while (r < n)
        {
            if (r - l + 1 == k)
            {
                if (s[r] == '1')
                {
                    count++;
                }

                if (count >= k)
                {
                    con = false;
                    break;
                }

                if (s[l] == '1')
                {
                    count--;
                }
                l++, r++;
            }
            else
            {
                if (s[r] == '1')
                {
                    count++;
                }
                r++;
            }
        }

        if (con)
        {
            cout << "YES\n";
            for (int v : ans)
                cout << v << " ";
            cout << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}