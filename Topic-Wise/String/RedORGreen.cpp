// Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour.

// Example 1:

// Input:
// N=5
// S="RGRGR"
// Output:
// 2
// Explanation:
// We need to change only the 2nd and
// 4th(1-index based) characters to 'R',
// so that the whole string becomes
// the same colour.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int RedOrGreen(int N, string S)
    {
        int rcount = 0, gcount = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == 'R')
            {
                rcount++;
            }
            else
            {
                gcount++;
            }
        }
        if (rcount > gcount)
        {
            return gcount;
        }
        else
        {
            return rcount;
        }
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N, S) << endl;
    }
    return 0;
} // } Driver Code Ends