#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  a,b;
    cin >> a >> b;
    string s;
    s = to_string(a+b);
    cout << s.size() << endl;

    return 0;
}