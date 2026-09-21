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
        // sort(v.begin(),v.end());

        // vector<int> p(n);
        // p[0] = v[0];

        // for (int i = 1; i < n; i++)
        // {
        //     p[i] = p[i - 1] + v[i];
        // }
        // bool x = true;

        // for (int i = 0; i < p.size(); i++)
        // {
        //     if (p[i] % 2 == 0)
        //     {
        //         x = false;
        //     }
        // }

        // if (x)
        //     cout << "Yes\n";
        // else
        //     cout << "No\n";

        int odd = 0,even = 0;

        for (int i = 0; i < n; i++)
        {
            if(v[i] % 2 == 0) even++;
            else odd++;
        }

        // int x = abs(odd - even);
       
        // if(x % 2 == 0)
        // {
        //     cout << "No\n";
        // }
        // else
        // {
        //     cout << "Yes\n";
        // }

        if(odd == 1)
            cout << "Yes\n";
        else cout << "No\n";    
        
    }

    return 0;
}