#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n - 1];
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
    }

    int a, b;
    cin >> a >> b;

    int year_sum = 0;

    for (int i = a; i < b; i++)
    {
        year_sum = year_sum + v[i];
    }

    cout << year_sum;

    return 0;
}