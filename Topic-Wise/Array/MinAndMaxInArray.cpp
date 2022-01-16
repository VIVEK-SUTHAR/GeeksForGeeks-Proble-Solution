// Find minimum and maximum element in an array
// Basic Accuracy: 59.4% Submissions: 42764 Points: 1
// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.
// Example 1:

// Input:
// N = 6
// A[] = {3, 2, 1, 56, 10000, 167}
// Output:
// min = 1, max =  10000
// Initial Template for C

#include <stdio.h>

struct pair
{
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n);

int main()
{
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);

        for (i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
} // } Driver Code Ends

// User function Template for C

struct pair getMinMax(long long int arr[], long long int n)
{
    long long int mini = arr[0];
    long long int maxi = 0;
    for (long long int i = 0; i < n; i++)
    {
        if (mini > arr[i])
            mini = arr[i];
        if (maxi < arr[i])
            maxi = arr[i];
    }
    struct pair p;
    p.min = mini;
    p.max = maxi;
    return p;
}