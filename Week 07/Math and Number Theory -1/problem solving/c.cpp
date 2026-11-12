#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverse(st.begin(), st.end());

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}