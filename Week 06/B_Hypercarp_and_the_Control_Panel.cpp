
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
        int a;
        cin >> a;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;

            if (v.size() < 2 || v.back() != x || v[v.size() - 2] != x)
            {
                v.push_back(x);
            }
        }
        bool x = false;

        if (v.size() == 1 || (v.size() == 2 && v[0] == v[1]))
        {
            x = true;
        }
        int n = v.size();
        int ans = v.size();
        bool one = false, two = false;

        for (int i = 0; i < n; i++)
        {
            if (i > 0 && v[i] == v[i - 1])
            {
                ans--;
            }

            if (i > 2 && v[i] == v[i - 1] && v[i - 2] == v[i - 3])
            {
                two = true;
            }

            if (i > 2 && v[i] == v[i - 1] && v[i] != v[i - 3])
            {
                one = true;
            }

            if (i + 3 < n && v[i] == v[i + 1] && v[i] != v[i + 3])
            {
                one = true;
            }

            if (i == 2 && v[i] == v[i - 1])
            {
                one = true;
            }

            if (i + 2 == n - 1 && v[i] == v[i + 1])
            {
                one = true;
            }
        }

        if (two)
        {
            ans += 2;
        }
        else if (one)
        {
            ans++;
        }

        if (x)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}