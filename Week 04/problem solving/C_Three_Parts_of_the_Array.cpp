#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    

    int l = 0, r = (int)v.size() - 1;
    long long int  final_ans = 0, samifinal_ans = 0,sum1 = v[l], sum3 = v[r];
    bool x = false;

    while (l < r)
    {

        if (sum1 > sum3)
        {

            r--;
            sum3 += v[r];
        }
        else if (sum1 < sum3)
        {

            l++;
            sum1 += v[l];
        }
        else
        {
            x = true;
            samifinal_ans = sum1;
            final_ans = max(samifinal_ans, final_ans);
            r--, l++;
            sum3 += v[r];
            sum1 += v[l];
        }
    }

    if (x)
        cout << final_ans << endl;
    else
        cout << 0 << endl;
    // for (auto x : v)
    // cout << x << " ";

    return 0;
}