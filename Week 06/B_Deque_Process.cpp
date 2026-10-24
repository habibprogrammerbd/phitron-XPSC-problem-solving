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

        int l = 0, r = n - 1;

        int last = 1;

        while (l <= r)
        {
            if (last % 2 == 0)
            {
                if (v[l] < v[r])
                {
                    cout << "R";
                    r--;
                }
                else
                {
                    cout << "L";
                    l++;
                }
                last = 1;
            }
            else
            {
                if (v[l] < v[r])
                {
                    cout << "L";
                    l++;
                }
                else
                {
                    cout << "R";
                    r--;
                }
                last = 2;
            }
        }

        cout << endl;
    }

    return 0;
}