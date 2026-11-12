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

        int ans = 0;
        char l = s[0];
        int x = 0;
        for (int i = 0; i < n; i++)
        {

            if (l == s[i])
                x++;
            else
            {
                x = 1;
                l = s[i];
            }

            if (x == 3)
            {
                ans++;
                x = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}