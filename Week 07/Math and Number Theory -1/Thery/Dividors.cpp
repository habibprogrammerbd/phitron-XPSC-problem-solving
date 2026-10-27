#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            if((n/i) != i)
            {
                cout << n/i << " ";
            }
        }
    }
    
    return 0;
}