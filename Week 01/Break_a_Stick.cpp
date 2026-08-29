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
    int sum = accumulate(v.begin(), v.end(), 0);
    int secend_sum = 0;
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        sum = sum - v[i];
        secend_sum = secend_sum + v[i];
        int final = 0;
        if (sum > secend_sum)
            final = sum - secend_sum;
        else
            final = secend_sum - sum;

        ans.push_back(final);
    }
    auto it = min_element(ans.begin(), ans.end());
    cout << *it << endl;

    return 0;
}