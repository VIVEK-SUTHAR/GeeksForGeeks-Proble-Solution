
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isDivisible(string s)
    {

        int odd = 0, even = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0 && s[i] == '1')
                even++;
            else if (i % 2 == 1 && s[i] == '1')
                odd++;
        }
        return (abs(odd - even) % 3) == 0;
    }
};

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        Solution ans;
        cout << ans.isDivisible(s) << endl;
    }
    return 0;
}