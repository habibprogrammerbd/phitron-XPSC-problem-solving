#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string s = to_string(a);
    reverse(s.begin(), s.end());
    if (s.size() < 4)
    {
        for (int i = s.size(); i < 4; i++)
        {
            s.push_back('0');
        }
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}