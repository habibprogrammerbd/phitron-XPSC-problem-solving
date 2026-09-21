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
        string s;
        s.clear
        

        int max =v[0];
        int pass = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if(max <= v[i])
            {
                pass++;
            }
        }
        cout << pass << endl;
        
    }

    return 0;
}
reverse