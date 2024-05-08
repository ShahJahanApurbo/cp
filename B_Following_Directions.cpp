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

        int x = 0, y = 0;

        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            char a = s[i];

            if (a == 'L')
            {
                x--;
            }
            else if (a == 'R')
            {
                x++;
            }
            else if (a == 'U')
            {
                y++;
            }
            else if (a == 'D')
            {
                y--;
            }

            if (x == 1 && y == 1)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (x != 1 || y != 1)
            cout << "NO" << endl;
    }
}