#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string x = " ";
    x = {s[1], s[2], s[0]};
    string y = " ";
    y = {s[2], s[0], s[1]};

    cout << stoi(s) + stoi(x) + stoi(y) << endl;
    // cout << x << " " << y;
    return 0;
}