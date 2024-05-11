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

        int a[n];
        set<int> s;
        for0(n)
        {
            int x;
            cin >> x;
            a[i] = x;
            s.insert(x);
        }

        if (s.size() == 1)
        {
            yes;
        }
        else if (s.size() == 2)
        {
            sort(a, a + n);
            int x = count(a, a + n, a[0]) - count(a, a + n, a[n - 1]);
            if (abs(x) < 2)
                yes;
            else
                no;
        }
        else
        {
            no;
        }
    }
}