// Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

// Example 1:

// Input:
// N = 4
// S = 1111
// Output: 6
// Explanation: There are 6 substrings from
// the given string. They are 11, 11, 11,
// 111, 111, 1111.
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    long binarySubstring(int n, string a){
        long c=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='1'){
                c++;
            }
        }
        return (c*(c-1))/2;
    }
};
int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}