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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = n;
        int flag = 0;

        for (int i = 0; i < n / 2; i++)
        {
            char a = s[i];
            char b = s[n - i - 1];
            if (a != b)
            {
                ans -= 2;
            }
            else
            {
                cout << ans << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << ans << endl;
        }
        }
}