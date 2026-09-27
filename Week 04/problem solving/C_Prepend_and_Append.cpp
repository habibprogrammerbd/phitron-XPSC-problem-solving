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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int left = 0;
        int right = s.size() - 1;

        int count = 0;
        bool x = false;
        while (left <= right)
        {
            if (x == false)
            {
                if (s[left] == '0' && s[right] == '1')
                {
                    left++;
                    right--;
                }
                else if (s[left] == '1' && s[right] == '0')
                {
                    left++;
                    right--;
                }
                else
                {
                    x = true;
                    if (left == right)
                    {
                        count++;
                    }
                    else
                    {
                        count += 2;
                    }
                    left++;
                    right--;
                }
            }
            else
            {
                if (left == right)
                {
                    count++;
                }
                else
                {
                    count += 2;
                }
                left++;
                right--;
            }
        }

        cout << count << endl;
    }

    return 0;
}

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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int left = 0;
        int right = s.size() - 1;

        int count = n;
        while (left <= right)
        {
            if (s[left] == s[right])
            {
                break;
            }
            else
            {
                count -= 2;
                left++,right--;
            }
        }

        cout << count << endl;
    }

    return 0;
}