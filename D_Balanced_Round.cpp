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
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int mx = 0;
        int len = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] <= k)
            {
                len++;
            }
            else
            {
                if (len > mx)
                    mx = len;
                len = 1;
            }
        }
        if (len > mx)
            mx = len;
        cout << n - mx << endl;
    }
}