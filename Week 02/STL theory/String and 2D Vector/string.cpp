#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    // s.pop_back();
    // s.push_back('5');

    // cout << s << "\n"
        //  << s.front() << " " << s.size() << " " << s.back() << " ";

    cout << s.substr(0,3) << endl;
    cout << s.substr(2,s.size());

    return 0;
}