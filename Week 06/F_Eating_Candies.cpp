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
        int i = 0, j = n - 1, al = 0, bob = 0, ans = 0;

        while (i <= j)
        {
           
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