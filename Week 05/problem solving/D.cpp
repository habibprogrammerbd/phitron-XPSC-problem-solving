#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int k,n;
        cin >> n >> k;

        for (int i = k; i <= 4 && n != 0; i++)
        {
            if(n == 0)
            {
                if(i-1 ==2 && i +1 == 4)
                if(i == 2 || i == 3 || i == 1)
                {
                    cout << "On\n";
                }
            }
        }
        
    }
    
    return 0;
}