#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = n;

        while (j >= i)
        {
            cout << n - j + 1 << "\t";
            j--;
        }
        j = n;
        int spaces = 1;
        while (spaces <= 2 * i - 2)
        {
            cout << "*" << "\t";
            spaces++;
        }
        while (j >= i)
        {
            cout << j - i + 1 << "\t";
            j--;
        }

        cout << endl;
        i += 1;
    }

    return 0;
}