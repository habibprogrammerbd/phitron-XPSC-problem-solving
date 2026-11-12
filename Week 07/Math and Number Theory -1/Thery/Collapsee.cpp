#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        long long ans = 0;

        for (int i = 0; i < n; i++){
            long long x;
            cin >> x;

            if (i < n - 2){
                ans += abs(x);
            }
            else if (i == n - 2){
                ans -= x;
            }
            else {
                ans += x;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}