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
        int n;
        cin >> n;

        pair<int, int> p;
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 10 && b > max)
            {
                max = b;
                p.first = b;
                p.second = i;
            }
        }
        cout << p.second + 1 << endl;
    }
}