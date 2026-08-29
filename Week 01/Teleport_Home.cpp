#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, t;
    cin >> d >> t;

    if (d < t)
    {
        cout << 0 << endl;
    }
    else
    {
        int x = d - t;

        cout << x << endl;
    }

    return 0;
}