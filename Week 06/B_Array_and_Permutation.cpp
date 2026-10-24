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
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int j = 0;
        bool x = false;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && b[i] == b[i - 1])
            {
                continue;
            }

            while (j < n && a[j] != b[i])
            {
                j++;
            }

            if (j == n)
            {
                x = true;
                break;
            }
            j++;
        }
        if (x)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}