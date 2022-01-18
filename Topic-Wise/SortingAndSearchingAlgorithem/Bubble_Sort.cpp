#include <stdio.h>
int main()
{
    int n;
    printf("Enter Array Size::");
    scanf("%d", &n);
    int ar[n];
    printf("Enter %d elements::",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                int temp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = temp;
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}