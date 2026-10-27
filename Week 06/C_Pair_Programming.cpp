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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> v1(n), v2(m), ans;

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> v2[i];
        }

        int i = 0, j = 0;
        bool x = true;

        while (i < v1.size() || j < v2.size())
        {
            if (i < v1.size() && v1[i] == 0)
            {
                k++;
                i++;
                ans.push_back(0);
            }
            else if (j < v2.size() && v2[j] == 0)
            {
                k++;
                j++;
                ans.push_back(0);
            }
            else if (i < v1.size() && v1[i] <= k)
            {
                ans.push_back(v1[i]);
                i++;
            }
            else if (j < v2.size() && v2[j] <= k)
            {
                ans.push_back(v2[j]);
                j++;
            }
            else
            {
                x = false;
                break;
            }
        }
        if (!x)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int x : ans)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}