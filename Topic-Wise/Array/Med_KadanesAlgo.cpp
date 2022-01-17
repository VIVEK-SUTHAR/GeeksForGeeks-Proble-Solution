#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long maxSubarraySum(int arr[], int n)
    {
        int maxsum = INT_MIN, max_end_here = 0;

        for (int i = 0; i < n; i++)
        {
            max_end_here += arr[i];
            if (maxsum < max_end_here)
            {
                maxsum = max_end_here;
            }
            max_end_here = max(max_end_here, 0);
        }
        return maxsum;
    }
};

int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {

        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
