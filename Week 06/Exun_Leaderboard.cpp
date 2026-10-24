#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int count = 0;
    if (n > m)
    {
        for (int i = m + 1; i < n; i++)
        {
            count++;
        }
    }
    else
    {
        for (int i = n + 1; i < m; i++)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}