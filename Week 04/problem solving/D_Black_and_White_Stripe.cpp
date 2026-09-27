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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int frist = 0, sec = 0, count = 0, ans = INT_MAX;

        while (sec < s.size())
        {
            if (s[sec] == 'W')
            {
                count++;
            }

            if (sec - frist + 1 == k)
            {
                ans = min(ans, count);
                if (s[frist] == 'W')
                {
                    count--;
                }

                frist++,sec++;
            }
            else
            {
                sec++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}