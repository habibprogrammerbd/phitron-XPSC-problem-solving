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
        int n, k;
        cin >> n >> k;
        set<int> m1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m1.insert(x);
        }
        cout << k - m1.size() << endl;
    }

    return 0;
}