#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrim(int n)
{
    if (n == 1)
        return false;
    // else if (n == 2)
    // {
    //     return true;
    // }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }

    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int g = 0;
        cout << n / 2 << '\n';
    }

    return 0;
}