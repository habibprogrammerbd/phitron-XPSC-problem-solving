#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> fec(1000001, 0);

    for (int i = 0; i < v.size(); i++)
    {
        fec[v[i]]++;
    }
    auto it = max_element(fec.begin(), fec.end());
    cout << *it << endl;

    return 0;
}