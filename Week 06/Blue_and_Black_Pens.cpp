#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,b;
    cin >> n >> b;

    cout << min((n*3),(n+b));

    return 0;
}