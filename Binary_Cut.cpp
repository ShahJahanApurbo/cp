#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define for0(n) for (int i = 0; i < n; i++)
#define for1(n) for (int i = 1; i <= n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int cnt = 1;
        int flag = 0;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
                continue;
            else
                cnt++;

            if (s[i] == '1' && s[i - 1] == '0')
                flag = 1;
        }
        cout << cnt - flag << endl;
    }
}