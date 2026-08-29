#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    if (a <= b)
    {
        for (int i = a; i <= b; i++)
        {
            count++;
        }
        cout << count << endl;
    }
    else
        cout << 0 << endl;

    return 0;
}