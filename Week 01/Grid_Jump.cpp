#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;
        long long int x = 0;

        while (true)
        {
            if (a <= 0 && b <= 0)
                break;

            if (a == b)
            {
                a--;
                b--;
                x = x + r;
            }
            else if (a > b)
            {
                int m = ceil(a / 2);
                if (m >= 2)
                {
                    a -= 2;
                }
                else
                {
                    a--;
                }

                x = x + p;
            }
            else if (b > a)
            {
                int m = ceil(b / 2);
                if (m >= 2)
                {
                    b -= 2;
                }
                else
                {
                    b--;
                }
                x = x + q;
            }
        }
        cout << x << endl;
    }

    return 0;
}