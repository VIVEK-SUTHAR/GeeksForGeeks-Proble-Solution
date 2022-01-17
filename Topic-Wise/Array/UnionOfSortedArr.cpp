// Union of two arrays can be defined as the common and distinct elements in the two arrays.
// Given two sorted arrays of size n and m respectively, find their union.
// Example 1:
// Input:
// n = 5, arr1[] = {1, 2, 3, 4, 5}
// m = 3, arr2 [] = {1, 2, 3}
// Output: 1 2 3 4 5
// Explanation: Distinct elements including
// both the arrays are: 1 2 3 4 5.
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> s(arr1, arr1 + n);
        vector<int> res;
        for (int i = 0; i < m; i++)
        {
            s.insert(arr2[i]);
        }
        for (auto i : s)
        {
            res.push_back(i);
        }
        return res;
    }
};
int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        int N, M;
        cin >> N >> M;

        int arr1[N];
        int arr2[M];

        for (int i = 0; i < N; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < M; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        vector<int> ans = ob.findUnion(arr1, arr2, N, M);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }

    return 0;
}
