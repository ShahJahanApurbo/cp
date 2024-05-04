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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt = 1;
        while (cnt)
        {
            cnt = 0;
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i - 1] < a[i] && a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                    cnt++;
                }
            }
        }
        if (is_sorted(a, a + n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}