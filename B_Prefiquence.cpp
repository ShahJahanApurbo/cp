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
        int a, b;
        cin >> a >> b;

        string s1, s2;
        cin >> s1 >> s2;

        // // printing v array
        // for (int i = 0; i < a; i++)
        // {
        //     cout << s1[i] << " ";
        // }
        // cout << endl;

        // // printing v1 array
        // for (int i = 0; i < b; i++)
        // {
        //     cout << s2[i] << " ";
        // }
        // cout << endl;
        int j = 0;
        int i = 0;
        while (i < b)
        {

            if (s1[j] == s2[i])
            {
                j++;
                i++;
            }
            else
            {
                i++;
            }
        }
        cout << j << endl;
    }
}