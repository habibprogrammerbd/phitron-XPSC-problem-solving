#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int frist = 0, sec = 0, sum = 0, cou = 0;

    while (sec < (int)v.size())
    {
        sum += v[sec];

        

        while (sum > k)
        {
            sum -= v[frist];
            frist++;
        }
        if (sum == k)
        {
            cou++;
        }
        sec++;
    }

    cout << cou << endl;

    return 0;
}