#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int mn = INT_MAX;
        int mnidx = -1;
        for (int i = 0; i < n; i++)
        {
            int x;

            cin >> x;
            if (x < mn)
            {
                mn = x;
                mnidx = i;
            }
            a[i] = x;
        }
        a[mnidx] = mn + 1;
        // cout << a[mnidx] << endl;
        int p = 1;
        for (int i = 0; i < n; i++)
        {
            p *= a[i];
        }
        cout << p << endl;
    }
}