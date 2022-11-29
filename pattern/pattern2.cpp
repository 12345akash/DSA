#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // for every row, run the col
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // when one row is printed, we need to add a newline
        cout << endl;
    }

    return 0;
}