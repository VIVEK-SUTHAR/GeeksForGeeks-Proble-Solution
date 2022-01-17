// Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

// Example 1:

// Input:
// S = i.like.this.program.very.much
// Output: much.very.program.this.like.i
// Explanation: After reversing the whole
// string(not individual words), the input
// string becomes
// much.very.program.this.like.i
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string reverseWords(string S)
    {
        // code here
        reverse(S.begin(), S.end());
        int size = S.length();
        int count = 0;
        for (int i = 0; i <= size; i++)
        {
            if (S[i] == '.' || S[i] == '\0')
            {
                int o = (i - count) / 2;
                for (int j = 0; j < o; j++)
                {
                    swap(S[count], S[i - j - 1]);
                    count++;
                }
                count = i + 1;
            }
        }
        return S;
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
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}