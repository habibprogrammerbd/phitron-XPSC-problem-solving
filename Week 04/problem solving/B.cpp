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
        if (n == 1)
        {
            ans = 1;
        }
        else if (n % 2 == 0)
        {
            ans = n / 2 + 1;
        }
        else
        {
            ans = n / 2;
        }

        cout << ans << endl;
    }

    return 0;
}