#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isArmstrong(int n)
{
    int copy = n;

    int sum = 0;
    while (n != 0)
    {
        int dig = n % 10;

        sum += (dig * dig * dig);

        n = n / 10;
    }

    return copy == sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (isArmstrong(n))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}