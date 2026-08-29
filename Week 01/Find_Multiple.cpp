#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    int ans = 0;
    bool q = false;

    for (int i = a; i <= b; i++)
    {
        if (i % x == 0)
        {
            ans = i;
            q = true;
            break;
        }
    }

    if (q == true)
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}