#include <bits/stdc++.h>
using namespace std;

int habib(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (b <= 3)
        {
            cout << -1 << endl;
            continue;
        }
        if (b - a > 0)
        {
            if (b % 2 != 0)
            {
                b--;
                cout << b / 2 << " " << b / 2 << endl;
            }
            else
                cout << b / 2 << " " << b / 2 << endl;

            continue;
            
        }
        int x = 

        if (habib(b) == b)
            cout << -1 << endl;
        else
            cout << habib(b) << " " << b - habib(b) << endl;
            
            
    }

      0;
}