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
        int n, x;
        cin >> n >> x;
        int ans = 0,count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i >= x)
            {
                ans += i;
                count++;
            }
        }

        cout << abs(ans - (count * x)) << endl;
    }

    return 0;
}