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
        int ans = 0;
        if (n <= 4)
        {

            ans = max(200, (100 * n));
        }
        else
        {
            int s = n - 4;
            ans = 400 + (s * 100);
        }

        cout << ans << endl;
    }

    return 0;
}