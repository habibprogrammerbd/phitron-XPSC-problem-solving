#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // for (int x : pre)
    //     cout << x << " ";
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = pre[b] - pre[a - 1];
        if (is_prime(sum))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}