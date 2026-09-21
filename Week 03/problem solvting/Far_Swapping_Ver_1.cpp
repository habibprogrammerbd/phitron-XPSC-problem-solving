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
            v.clear
        }

        for (int i = 0; i < n - 1; i++)
        {
            if ((v[i] - v[i + 1] > 1))
            {
        
                swap(v[i], v[i + 1]);
            }
        }

        for (auto x : v)
            cout << x << " ";
        
        cout << endl;
    }

    return 0;
}