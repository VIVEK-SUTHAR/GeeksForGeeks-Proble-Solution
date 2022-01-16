// Given an array A[] of size n. The task is to find the largest element in it.
// Input:
// n = 5
// A[] = {1, 8, 7, 56, 90}
// Output:
// 90
// Explanation:
// The largest element of given array is 90.
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    return max;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}
  // } Driver Code Ends