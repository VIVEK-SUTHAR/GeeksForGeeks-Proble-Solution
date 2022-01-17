/* Given a String. Reverse each word in it where the words are separated by dots.
Example 1:
Input:
S = "i.like.this.program.very.much"
Output:
i.ekil.siht.margorp.yrev.hcum
Explanation:
The words are reversed as
follows:"i" -> "i","like"->"ekil",
"this"->"siht","program" -> "margorp",
"very" -> "yrev","much" -> "hcum". */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        int start = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '.')
            {
                reverse(s.begin() + start, s.begin() + j);
                start = j + 1;
            }
        }
        reverse(s.begin() + start, s.end());
        return s;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWords(s) << endl;
    }
    return 0;
}