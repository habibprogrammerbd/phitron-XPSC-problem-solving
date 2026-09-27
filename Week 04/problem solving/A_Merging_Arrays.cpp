#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> sum;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        sum.push_back(x);
    }
    sort(sum.begin(), sum.end());
    for (int i = 0; i < sum.size(); i++)
    {
        cout << sum[i] << " ";
    }

    return 0;
}