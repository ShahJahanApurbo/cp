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
    char a[2][30];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            a[i][j] = '.';
        }
    }

    vector<char> b(30, '.');
    for (int i = 0; i < 30; i++)
    {
        if (i == 10)
            b[i] = 'T';
        else if (i == 19)
            b[i] = 'H';
        else if (i == 11 || i == 12 || i == 13 || i == 14 || i == 15 || i == 16 || i == 17 || i == 18)
            b[i] = '-';
    }

    int k = 1;

    while (k <= t)
    {
        cout << "Case #" << k << ":" << endl;
        int n;
        cin >> n;

        vector<char> c(30);
        for (int i = 0; i < 30; i++)
        {
            c[i] = b[i];
        }

        for (int i = 0; i < n; i++)
        {
            auto x = c.back();
            c.pop_back();
            c.insert(c.begin(), x);
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < 30; i++)
        {
            cout << c[i];
        }
        cout << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        k++;
    }
}