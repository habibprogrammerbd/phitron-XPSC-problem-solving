#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        vector<int> v1 = v;
        vector<int> v2 = v;
        // int mx1 = *max_element(v1.begin(),v1.end());
       
        v1.erase(max_element(v1.begin(),v1.end()));

        int ans1 = *max_element(v1.begin(),v1.end()) - *min_element(v1.begin(),v1.end());
        


        // int mx2 = *min(v2.begin(),v2.end());
       
        v2.erase(min_element(v2.begin(),v2.end()));

        int ans2 = *max_element(v2.begin(),v2.end()) - *min_element(v2.begin(),v2.end());

        cout << min(ans1 , ans2) << endl;
        
    }

    return 0;
}