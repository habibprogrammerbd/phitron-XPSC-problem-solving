#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a <= b)
            cout << abs(a - b) << endl;
        else
            cout << abs(b - a) << endl;
    }

    return 0;
}