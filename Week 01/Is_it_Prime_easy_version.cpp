#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool x = false;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            x = true;
            break;
        }
    }

    if (x == true)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}