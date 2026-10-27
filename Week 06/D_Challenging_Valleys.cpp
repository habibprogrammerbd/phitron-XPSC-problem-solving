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

        int count = 0;

        int i = 0;

        while (i < n)
        {
            int j = i;
            while (j < n && v[i] == v[j])
            {
                j++;
            }

            bool x = (i == 0 || v[i - 1] > v[i]);
            bool y = (j == n || v[j] > v[i]);

            if (x && y)
                count++;

            i = j;
        }

        // cout << count << endl;
        if (count == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}