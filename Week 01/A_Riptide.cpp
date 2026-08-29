#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int count = 0;

        while (true)
        {
            if (a == b || b == c || c == a)
                break;
            count++;
            if (a > b && a > c)
                a--;
            else if (b > a && b > c)
                b--;
            else
                c--;

            if (a < b && a < c)
                a++;
            else if (b < a && b < c)
                b++;
            else
                c++;
        }
        cout << count << endl;
    }

    return 0;
}