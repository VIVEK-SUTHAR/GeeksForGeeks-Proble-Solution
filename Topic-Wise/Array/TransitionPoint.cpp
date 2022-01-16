// Given a sorted array containing only 0s and 1s, find the transition point.

// Example 1:

// Input:
// N = 5
// arr[] = {0,0,0,1,1}
// Output: 3
// Explanation: index 3 is the transition
// point where 1 begins.
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
} // } Driver Code Ends

int transitionPoint(int arr[], int n)
{
    // code here
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c1++;
        else
            c2++;
    }
    if (c2 == 0)
        return -1;
    return c1;
}