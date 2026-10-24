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
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;

        string s;

        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i] == s2[i]) s.push_back('G');
            else s.push_back('B');
        }
        
        cout << s << endl;
    }
    

    return 0;
}