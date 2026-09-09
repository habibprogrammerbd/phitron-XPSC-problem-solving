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
        string a, b;
        cin >> a;
        cin >> b;
        int max_a = 0, max_b = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'a')
                max_a++;
            else if (a[i] == 'b')
                max_b++;
        }

        int max_x = 0, max_y = 0;

        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == 'a')
                max_x++;
            else if (b[i] == 'b')
                max_y++;
        }
        // int ans1 = max(max_a, max_b);
        // int ans2 = max(max_x, max_y);
        int ans = max_a + max_x;

        if (ans == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}