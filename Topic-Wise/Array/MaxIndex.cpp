#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        for(int d=N-1; d<N; d--) {
            for(int i=0; d+i<N; i++) {
                if(A[i] <= A[d+i]) {
                    return d;
                }
            }
        }

    }
};
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends