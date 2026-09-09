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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = v[0] + v[1];
        for (int i = 0; i < n - 1; i++)
        {
            int x = v[i] + v[i + 1];
            ans = min(ans, x);
        }
        cout << ans << endl;
    }

    return 0;
}