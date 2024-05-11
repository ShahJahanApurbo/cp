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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int flag = 0;

        while (a != b)
        {
            a++;
            if (a > 12)
                a = 1;
            if (a == c || a == d)
            {
                flag++;
            }
        }
        if (flag == 1)
            yes;
        else
            no;
    }
}