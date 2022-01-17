#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int mx = 0 , res = -1;
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(arr[i][j] < 1)
        {
            j++;
        }
        int cnt = m - j;
        if(cnt > mx)
        {
            res = i;
            mx = cnt;
        }
    }
    return res;
	}

};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}