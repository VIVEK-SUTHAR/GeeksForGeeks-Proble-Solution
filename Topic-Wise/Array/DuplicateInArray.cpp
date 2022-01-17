// Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

// Example 1:

// Input:
// N = 4
// a[] = {0,3,1,2}
// Output: -1
// Explanation: N=4 and all elements from 0
// to (N-1 = 3) are present in the given
// array. Therefore output is -1.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        // code here
        vector<int> v;
        int key = -1;
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
            if (arr[i] == arr[i - 1] && key != arr[i])
            {
                key = arr[i];
                v.push_back(arr[i]);
            }
        if (v.empty())
            v.push_back(-1);
        return v;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
