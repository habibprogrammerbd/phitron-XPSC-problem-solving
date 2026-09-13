#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;
    // set<int> se;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<int> se;
    vector<int> ans(n);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (se.count(v[i]) == 0)
        {
            se.insert(v[i]);
        }
        ans[i] = se.size();
    }
    while (l--)
    {
        int q;
        cin >> q;

        cout << ans[q - 1] << endl;
    }

    return 0;
}