#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);
int main()
{
    int Tc;
    cin >> Tc;
    while (Tc--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
int convertFive(int n)
{
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            s[i] = '5';
    }
    int a = stoi(s);
    return a;
}