#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1000000007;

int power(int a, int b)
{
    ll res = 1;

    while (b != 0)
    {
        if (b % 2 != 0)
        {
            res = (res * a)%MOD;
            b--;
        }
        else
        {
            a = (a * a) % MOD;
            b /= 2;
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    cout << power(a, b) << '\n';

    return 0;
}