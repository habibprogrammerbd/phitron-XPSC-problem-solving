#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    ll count = 0, x = 1;
    vector<ll> ans;

    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if ((n / i) != i)
            {
                ans.push_back(n / i);
            }
        }
    }

    sort(ans.begin(), ans.end());

    if(ans.size() < k) cout << -1 << endl;
    else cout << ans[k-1] << endl;

    return 0;
}