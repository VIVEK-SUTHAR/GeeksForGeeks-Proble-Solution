#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int closing(string s, int pos)
    {
        int top = 0;
        for (int i = pos + 1; s[i]; i++)
        {
            if (s[i] == '[')
                top++;
            else if (s[i] == ']')
            {
                if (top == 0)
                {
                    return i;
                }
                top--;
            }
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int pos;
        cin >> pos;
        Solution ob;
        cout << ob.closing(s, pos) << '\n';
    }
}
// } Driver Code Ends