#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int  x = v[0] % 2;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] % 2 != x)
            {
                x = true;
                break;
            }
        }

        if (x)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}