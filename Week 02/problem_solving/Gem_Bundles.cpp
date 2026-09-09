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
        int a, b, c;
        cin >> a >> b >> c;

        int x = min({a, b, c});

        if (x == 0)
        {
            cout << (a * 3) + (b * 3) + (c * 3) << endl;
        }
        else
        {
            int z = x * 10;
            int p = abs(x - a), o = abs(x - b), i = abs(x - c);

            int ans = z + p * 3 + o * 3 + i * 3;
            cout << ans << endl;
        }
    }

    return 0;
}