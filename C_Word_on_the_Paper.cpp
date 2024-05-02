#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 8;
        char s[8][8];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[i][j] >= 'a' && s[i][j] <= 'z')
                    cout << s[i][j];
            }
        }
        cout << endl;
    }
}