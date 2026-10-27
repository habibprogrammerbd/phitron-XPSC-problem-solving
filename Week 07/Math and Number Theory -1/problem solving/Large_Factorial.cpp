#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MOD = 1e9 + 7;

    int t;
    cin >> t;
    while (t--)
    {
        int ans  = 1,n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            ans = (1LL * ans % MOD * i % MOD) % MOD;
        }
        cout << ans << '\n';
    }
    

    return 0;
}