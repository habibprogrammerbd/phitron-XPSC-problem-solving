#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    for (int i = (n / 2) +1; i <= n; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
   
    return 0;
}