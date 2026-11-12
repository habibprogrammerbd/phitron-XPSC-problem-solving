#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x = n / 5;
    if(n < 5) cout << n << endl;
    else cout << ((n - 5) + 1) << endl;

    return 0;
}