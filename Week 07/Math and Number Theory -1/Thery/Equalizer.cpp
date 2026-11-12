#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int score = 0;

        for (int i = 0; i < n - 1; i++){
            if (a[i] == a[i + 1]){
                score++;
            }
        }

        int ans = score;
        int best = 0;

        for (int r = 0; r < n; r++){
            int left = 0;
            int right = 0;

            if (r > 0) {
                if (a[r - 1] == a[r] + 1){
                    left = 1;
                } else if(a[r - 1] == a[r]){
                    left = -1;
                }
            }

            if (left > best){
                best = left;
            }

            if (r < n - 1){
                if (a[r] + 1 == a[r + 1]){
                    right = 1;
                }else if (a[r] == a[r + 1]){
                    right = -1;
                }
            }

            int current = score + best + right;

            if(current > ans){
                ans = current;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}