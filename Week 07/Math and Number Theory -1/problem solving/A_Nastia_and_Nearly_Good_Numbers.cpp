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
        ll a, b;
        cin >> a >> b;

        if (b == 1)
            cout << "NO\n";
        else
        {
            ll x = a * b * 2;
            ll y = x - a;
            cout << "YES\n";
            cout << a << " " << y << " " << x << endl;
        }
    }

    return 0;
}