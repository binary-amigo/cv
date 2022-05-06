#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            cout << "  ";
        }
        for (k = 1; k <= 9; k++)
        {
            if (i + k == 6 || k - i == 4 || i == 5)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}