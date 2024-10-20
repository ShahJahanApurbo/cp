#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n[3][3];
    int m[9];

    for (int i = 0; i < 9; i++)
    {
        m[i] = 0;
    }
    int a = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp = rand() % 9 + 1;
            for (int k = 0; k < 9; k++)
            {
                if (m[k] == temp)
                {
                    temp = rand() % 9 + 1;
                    k = 0;
                }
            }
            m[a++] = temp;
            n[i][j] = temp;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << n[i][j] << " ";
        }
        cout << std::endl;
    }
}