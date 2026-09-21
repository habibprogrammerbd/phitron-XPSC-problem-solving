#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, g;
    cin >> n >> g;

    int ans = 0;
    if (n > g)
        ans = g * 5 + (1 * (n - g));
    else
        ans = n * 5 + (2 * (g - n));

    cout << ans << endl;

    return 0;
}