#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {

        if (v[i] < v[i + 1])
        {
            if (k >= v[i] && k < v[i + 1])
            {
                count++;
            }
        }
        else
        {
            if (k > v[i + 1] && k <= v[i])
            {
                count++;
            }
        }
    }

    if (v[n - 1] == k)
        count++;

    cout << count << endl;

    return 0;
}