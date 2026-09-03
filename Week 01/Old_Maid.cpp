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
    sort(v.begin(), v.end());
    v.push_back(0);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            // v.erase(v.begin()+i);
            // v.erase(v.begin()+(i+1)); 
            i++;
        }
        else
        {
            ans.push_back(v[i]);
        }
    }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    cout << accumulate(ans.begin(),ans.end(),0) << endl;

    return 0;
}