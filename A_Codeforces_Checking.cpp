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
        char a;
        cin >> a;

        if (a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a == 'o' || a == 'r' || a == 'c' || a == 'e' || a == 's')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}