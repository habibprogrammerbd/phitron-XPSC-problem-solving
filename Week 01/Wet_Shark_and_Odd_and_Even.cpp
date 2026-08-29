#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int ans = 0;
    long long int odd_value = INT_MAX;
    bool print = false;

    long long int x = 0;
    for (int i = 0; i < n; i++)
        x += v[i];

    if (x % 2 == 0)
    {
        cout << x << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0)
        {
            if (odd_value > v[i])
                odd_value = v[i];
        }
    }

    cout << x - odd_value << endl;

    return 0;
}
