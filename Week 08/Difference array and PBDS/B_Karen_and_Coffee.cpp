
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> diff(200005, 0),ans(200005,0);

    while (n--)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i < diff.size(); i++)
    {
        diff[i] = diff[i - 1] + diff[i];
    }

    for(int i = 1; i < diff.size();i++)
    {
        if(diff[i] >= k) ans[i] = ans[i-1] + 1;
        else ans[i] = ans[i-1];
    }

    while (q--)
    {
        int a,b;
        cin >> a >> b;

        cout << ans[b] - ans[a-1] << '\n';
    }
    

    // for (int i = 0; i < diff.size(); i++)
    // {
    //     cout << i << " --->" << diff[i];
    //     ;
    //     cout << endl;
    // }
    // cout << endl;
    // // for (int i = 0; i < diff.size(); i++)
    // {
        
    // }
    // cout << endl;
    

    return 0;
}