#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            m[nums[i]] = i;
        }

        int i = 0, count = 0;

        for (auto &it : m)
        {

            if (i != it.second)
            {
                int temp = it.second;
                m[nums[i]] = it.second;
                it.second = i;

                count++;
                swap(nums[i], nums[temp]);
            }
            i++;
        }
        return count;
    }
};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution obj;
        int ans = obj.minSwaps(nums);
        cout << ans << "\n";
    }
    return 0;
}