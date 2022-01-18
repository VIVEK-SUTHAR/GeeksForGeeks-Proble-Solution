#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string convertToBinary(int n, int N)
    {
        vector<int> v;
        int temp = N;
        while (temp)
        {
            v.push_back(n & 1);
            n >>= 1;
            temp >>= 1;
        }
        string s = "";
        for (int i = v.size() - 1; i >= 0; i--)
        {
            s += to_string(v[i]);
        }
        return s;
    }
    vector<string> graycode(int n)
    {
        int N = (1 << (n - 1));
        vector<string> v;
        for (int i = 0; i < (N << 1); i++)
        {
            int num1 = (i >> 1);
            int res = i ^ num1;
            string s = convertToBinary(res, (1 << (n - 1)));
            v.push_back(s);
        }
        return v;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        vector<string> ans = ob.graycode(n);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}