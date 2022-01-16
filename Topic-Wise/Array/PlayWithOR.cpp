//  You are given an array arr[], you have to re-construct an array arr[].
// The values in arr[] are obtained by doing OR(bitwise or) of consecutive elements in the array.

// Example 1:

// â€‹Input : arr[ ] = {10, 11, 1, 2, 3}
// Output : 11 11 3 3 3
// Explanation:
// At index 0, arr[0] or arr[1] = 11
// At index 1, arr[1] or arr[2] = 11
// At index 2, arr[2] or arr[3] = 3
// ...
// At index 4, No element is left So, it will
// remain as it is.
// New Array will be {11, 11, 3, 3, 3}.
#include<bits/stdc++.h>
using namespace std;
int *game_with_number(int arr[], int n);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int *arr2;

        arr2 = game_with_number(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr2[i] << " ";

        cout << endl;
    }
}
// } Driver Code Ends

int *game_with_number(int arr[], int n)
{
    int i, x;
    for (i = 0; i < n - 1; i++)
    {
        x = (arr[i] | arr[i + 1]);
        arr[i] = x;
    }
    return arr;
}
