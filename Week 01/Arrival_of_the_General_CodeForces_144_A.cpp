#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max_count = 0;
    int max_number = 0;
    int idx_one = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_number < v[i])
        {
            max_number = v[i];
            idx_one = i;
            max_count++;
        }
    }

    int min_count = 0;
    int min_number = 1e9;
    int idx_two = 0;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (min_number > v[i])
        {
            min_number = v[i];
            idx_two = i;
            min_count++;
        }
    }

    // cout << idx_one << " " << idx_two;
    // cout << max_number;
    int x = idx_one - 1;
    int y = (n - 1) - idx_two;
    cout << y + y;

    return 0;
}