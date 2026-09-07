#include <bits/stdc++.h>
using namespace std;

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // int x = n / 2;
        // while (x--)
        // {
        //     for (int i = 0; i < v.size(); i++)
        //     {

        //         v[i] = abs(v[i] - 2);
        //     }
        // }
        int p = 0;
        int y = 0;
        int z = 0;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     if (v[i] % 2 != 0)
        //         p++;
        //     else if (v[i] % 2 == 0)
        //         y++;
        // }
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                p++;
            }
            else if (v[i] % 4 == 0)
            {
                y++;
            }
            else
            {
                z++;
            }
        }


        cout << max({p, y,z}) << endl;
    }

    return 0;
}