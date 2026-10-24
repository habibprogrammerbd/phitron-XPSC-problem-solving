#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s = "ababababab";
    string pa = "ab";
    map<char, int> mp;
    map<char, int> pa_mp;

    for (char x : pa)
    {
        pa_mp[x]++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        int l = 0, r = 0;

        while (r < s.size())
        {
            mp[s[r]]++;
            if (r - l + 1 == pa.size())
            {
                if (mp == pa_mp)
                {
                    s.erase(l, pa.size());
                    mp.clear();

                    r = 0, l = 0;
                    continue;
                }

                mp[s[l]]--;
                if (mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }

                r++, l++;
            }
            else
            {
                r++;
            }
        }
    }

    cout << s << endl;
    return 0;
}
