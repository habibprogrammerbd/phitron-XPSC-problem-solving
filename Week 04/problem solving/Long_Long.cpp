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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long int sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                count++;
                while (i < n && v[i] <= 0)
                {
                    i++;
                }
                i--;
            }

        }
        for (int i = 0; i < n; i++)
        {
            sum+=abs(v[i]);
        }
        
        cout << sum << " " <<  count << endl;
    }

    return 0;
}