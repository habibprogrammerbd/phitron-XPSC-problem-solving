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
        int n, m, h;
        cin >> n >> m >> h;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> v1 = v;
        vector<int> ch;

        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;

            v[a - 1] += b;
            if (v[a - 1] > h)
            {
                ch.push_back(a - 1);
                for (int x : ch)
                {
                    v[x] = v1[x];
                }
                ch.clear();
            }
            else
            {
                ch.push_back(a - 1);
            }
        }

        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}