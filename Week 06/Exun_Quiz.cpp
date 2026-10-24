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
        int n, s;
        cin >> n >> s;

        if (s == 0)
        {
            cout << 0 << endl;
            continue;
        }

        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        int ans = 1e9;
        // int a = 0;
        for (int i = 1; i <= n; i++)
        {
            int x = i * 4;
            if (x >= s)
            {
                ans = min(ans, i + (x - s));
            }
        }

        if (ans == 1e9)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}