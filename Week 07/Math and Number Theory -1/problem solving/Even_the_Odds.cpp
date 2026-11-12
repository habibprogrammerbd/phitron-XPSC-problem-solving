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
        int n, odd = 0, even = 0, a = 0, b = 0, ans = 0;
        cin >> n;

        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x % 2 == 0)
            {
                even++;
                a++;
                b = 0;
            }
            else
            {
                odd++;
                b++;
                a = 0;
                ans = max({ans,i-1, n - i});
            }
        }

        if (odd % 2 == 0)
            cout << n << endl;
        else
            cout << ans << endl;
        // else
        // {
        //     cout << max(a, b) << endl;
        // }
    }

    return 0;
}
