#include <stdio.h>
int main()
{
    int a[5], key, flag = 0,n;
    int mid, first = 0, last = 4;
    printf("Enter Values::");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        count++;
    }
    printf("\nEnter Value to search:");
    scanf("%d", &key);
    mid = (first + last) / 2;
    while (first <= last)
    {
        if (a[mid] == key)
        {
            printf("\nFound");
            break;
        }
        if (a[mid] > key)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
        mid = (first + last) / 2;
    }
getchar();
}
