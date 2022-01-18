//SELECTION SORT
#include<stdio.h>
void line()
{
    printf("\n_____________________________________________");
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    line();
    printf("\nSorted Array in Increasing Order::");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    line();
    line();
    printf("\nSorted Array in Decreasing Order::");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    line();
}
