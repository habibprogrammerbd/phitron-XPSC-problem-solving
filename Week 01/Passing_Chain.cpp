#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 1;
        for (int i = 1; i <= n; )
        {
            if (i + k <= n)
            {
                ans = i + k;
                i = ans;
            }
            else
                break;
        }
        cout << ans << endl;
    }

    return 0;
}