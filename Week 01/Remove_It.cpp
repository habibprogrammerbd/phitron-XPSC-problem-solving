#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v.erase(remove(v.begin(), v.end(), x), v.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}