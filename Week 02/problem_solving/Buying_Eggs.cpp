#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >>a >>b >> c;
    int x = a * 12;
    int y = (b * 12) + c;
    cout << min(x, y) << endl;
    return 0;
}