#include <iostream>
#include <string>
using namespace std;

int countSubstringOccurrences(const string &A, const string &B)
{
    int count = 0;
    size_t pos = A.find(B);
    while (pos != string::npos)
    {
        count++;
        pos = A.find(B, pos + 1);
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        string A, B;
        cin >> A >> B;

        int result = countSubstringOccurrences(A, B);
        cout << "Case " << i << ": " << result << endl;
        i++;
    }
    return 0;
}