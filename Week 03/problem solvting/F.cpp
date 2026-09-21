#include <bits/stdc++.h>
using namespace std;

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
        vector<int> v(n + 1);
        for (int i = 1; i < n + 1; i++)
        {
            cin >> v[i];
        }

        int sd = n / 2;
        int sef_val = v[sd];

        vector<int> cy = v;

        sort(cy.begin(), cy.end());
        int my_val = cy[sd];

        int l = 0, r = 0;
        for (int i = 1; i <= n; i++)
        {
            if (sef_val == v[i])
            {
                l = i;
            }
            if (my_val == v[i])
            {
                r = i;
            }
        }

        cout << sef_val << " " << my_val << endl;
    }

    return 0;
}