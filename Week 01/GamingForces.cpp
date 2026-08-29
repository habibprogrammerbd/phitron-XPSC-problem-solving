#include <bits/stdc++.h>
using namespace std;

int main()
{
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
        int dub = 0;
        sort(v.begin(), v.end());
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[i + 1] && v[i] == 1)
            {
                dub = dub + v[i];
                i++;
            }
            else
            {
                dub++;
            }
        }
        int sz = v.size() - 1;
        cout << min(dub, sz) << endl;
    }

    return 0;
}