#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        int x = a % 2;
        int y = a / 2;

        cout << x * 20 + y * 30  << endl;
    }

    return 0;
}