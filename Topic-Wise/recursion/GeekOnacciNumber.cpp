#include <iostream>
using namespace std;
int solve(int a, int b, int c, int n, int counter)
{

    if (counter == n)
    {
        return c;
    }

    solve(b, c, a + b + c, n, counter + 1);
}

int main()
{

    int t, a, b, c, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> n;
        cout << solve(a, b, c, n, 3) << endl;
    }
}