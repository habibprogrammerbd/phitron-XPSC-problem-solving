#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> ans(n);

    while (k != 0)
    {
        for (int i = 0; i < n && k != 0; i++)
        {
            ans[i]+=1;
            k--;
        }
        
    }

    for(auto x : ans)
    {
        cout <<x << endl;
    }
    
    
    return 0;
}