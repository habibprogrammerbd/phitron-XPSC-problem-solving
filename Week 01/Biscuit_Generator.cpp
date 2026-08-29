#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    int ans = 0;
    for (int i = a; i <= x; i = i + a)
    {
        ans = ans + b;
    }
    cout << ans << endl;

    return 0;
}