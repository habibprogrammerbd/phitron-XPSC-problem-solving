#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        string n,m;
        cin >> n >> m;
        int sz = 0;
        if(m.size() > n.size()) sz = m.size();
        else sz = n.size();
        for (int i = 0; i < sz; i++)
        {
            if(n[i] == m[i]) cout << m[i];
            else break;
        }
        cout << endl;
        
    }
    
    return 0;
}