#include<bits/stdc++.h>
int main()
{

    int arr[] = {5, -4, -2, 6, -1};
    int n=5;
    for (int i=0; i <n; i++) //start element
		{
			for (int j=i; j<n; j++)   // end element
			{
				for (int k=i; k<=j; k++) // print element from start to end
				{
                    printf("%d ",arr[k]);
				}
				printf("\n");
			}
		}
    return 0;
}