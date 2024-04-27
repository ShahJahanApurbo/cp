#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[10][10];
    int point[10][10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 9 || j == 0 || j == 9)
                point[i][j] = 1;
            else if (i == 1 || i == 8 || j == 1 || j == 8)
                point[i][j] = 2;
            else if (i == 2 || i == 7 || j == 2 || j == 7)
                point[i][j] = 3;
            else if (i == 3 || i == 6 || j == 3 || j == 6)
                point[i][j] = 4;
            else
                point[i][j] = 5;
        }
    }
    while (t--)
    {
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++)
            {
                if (s[j] == '.')
                    a[i][j] = 0;
                else
                    a[i][j] = 1;
            }
        }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 1)
                    sum += point[i][j];
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}