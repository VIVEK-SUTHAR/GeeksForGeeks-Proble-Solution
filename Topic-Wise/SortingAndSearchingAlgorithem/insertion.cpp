#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<n;j++)
    {
        int key=arr[j];
        int i=j-1;
        while(arr[i]>key && i>=0)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}