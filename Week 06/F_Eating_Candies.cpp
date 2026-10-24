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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 1, j = n - 2, al = v[0], bob = v[n - 1], ans = 0;

        while (i <= j)
        {
            if (bob == al)
            {
                ans = max(ans, (i + ((n - 1) - j)));
            }
            if (al < bob)
            {
                al += v[i];
                i++;
            }
            else
            {
                bob += v[j];
                j--;
            }
            if (bob == al)
            {
                ans = max(ans, (i + ((n - 1) - j)));
            }
        }

        cout << ans << endl;
        // cout << al << " " << bob;
    }

    return 0;
}