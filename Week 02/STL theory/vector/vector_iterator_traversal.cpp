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

    // auto it = v.begin() + 2;  // O(1)
    // cout << *it << endl;
    // for (auto i = v.begin(); i != v.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // for (auto i = v.rbegin(); i != v.rend(); i++)
    // {
    //     cout << *i << " ";
    // }

    // auto last = --v.end();
    // cout << *last << endl;

    // reverse(v.begin(),v.end());
    // reverse(v.begin(),v.begin()+4);

    // sort(v.begin(), v.end());  Nlog(n)
    // sort(v.begin(),v.begin()+4);

    // sort(v.rbegin(),v.rend());
    // sort(v.begin(),v.end(),greater<int>());

    // cout << &(*max_element(v.begin(), v.end())) << " " << *min_element(v.begin(), v.end());
    // cout << endl;

    // cout << abs(v.begin() - max_element(v.begin(), v.end()));

    // for (auto i = v.begin(); i != v.end(); i++)
    // {
    //     cout << &(*i) << " ";
    // }

    return 0;
}