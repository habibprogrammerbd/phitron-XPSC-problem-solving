#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;cin >> a >>b;int x = a-b;if(abs(x) <= 2) cout << "Interesting\n";else cout << "Boring\n";
    return 0;
}