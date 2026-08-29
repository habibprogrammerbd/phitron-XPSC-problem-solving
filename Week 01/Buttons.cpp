#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x = a + b;
    int y = 0;
    if (a > b)
        y = a + (a - 1);
    else
        y = b + (b - 1);
    cout << max(x, y) << endl;
    ;
    return 0;
}