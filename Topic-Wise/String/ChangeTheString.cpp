// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string modify(string s)
    {
        // your code here
        int flag;
        if (s[0] >= 65 and s[0] <= 90)
            flag = 1;
        else
            flag = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (flag == 1)
            {
                if (!(s[i] >= 65 && s[i] <= 90))
                    s[i] = s[i] - 'a' + 'A';
            }
            else
            {
                if (s[i] >= 65 && s[i] <= 90)
                    s[i] = s[i] + 'a' - 'A';
            }
        }
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
        cout << ob.modify(s) << endl;
    }
}