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
        vector<int> z = v;
        vector<int> y = v;
        for (int i = 0; i < z.size(); i++)
        {
            if (z[i] == -1)
                z[i] = 0;
        }
        // vector<int> s1;
        int ans_size_one = 0;
        int car1 = 0;
        for (int i = 0; i < z.size(); i++)
        {
            ans_size_one = max(ans_size_one, car1);
            if (z[i] == 1)
            {
                car1 = 0;
                for (int j = i; j < z.size(); j++)
                {
                    car1++;
                    if (z[j] == 1)
                    {
                        break;
                        i = j;
                    }
                }
            }
        }

        for (int i = 0; i < z.size(); i++)
        {
            if (y[i] == -1)
                y[i] = 1;
        }
        int ans_size_two = 0;
        int car2 = 0;
        for (int i = 0; i < y.size(); i++)
        {
            ans_size_two = max(ans_size_two, car2);
            if (y[i] == 1)
            {
                car2 = 0;
                for (int j = i; j < y.size(); j++)
                {
                    car2++;
                    if (y[j] == 1)
                    {
                        break;
                        i = j;
                    }
                }
            }
        }

        cout << ans_size_one << " " << ans_size_two;
    }

    return 0;
}