#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ati mulot (Heep data structure) teke asce... atr 2 ti vertion ace  1. min 2.max ..... ({max}) ti deublict and boro teke coto non_incneaing takbe......({min})  ait dublict soho coto teke boro non_decneing takbe....

    int n;
    cin >> n;
    // priority_queue<int> pq;  // max vartion
    priority_queue<int,vector<int>,greater<int>> pq; // min vartino 

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x); /// -------->>>> O(log(N))
    }
    pq.pop();  // -------->>>> O(log(N))

    cout << "size -- > " << pq.size() << endl; // --------> O(1)

    // cout << pq.top() << endl;

    while (!pq.empty()) //  --------- > O(log(1))
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}