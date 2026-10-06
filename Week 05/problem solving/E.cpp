#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = 0;
        for (int i = 0; i < a; i++)
        {
            x += (b * 2);
        }

        cout << x << endl;
    }

    return 0;
}