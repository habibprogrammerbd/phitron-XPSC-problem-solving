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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int ans = 0;

        for (int i = 2; i <= 2 * n; i++)
        {
            int up_ans = 0;
            for (int j = 1; j <= i / 2; j++)
            {
                if (j == i - j)
                {
                    up_ans += mp[j] / 2;
                }
                else
                {
                    up_ans += min(mp[j], mp[i - j]);
                }
            }

            ans = max(up_ans, ans);
        }

        cout << ans << endl;
    }
    

    return 0;
}