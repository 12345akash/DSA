#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int space = 0; space < n - row; space++)
        {
            cout << " ";
        }

        //int c = row > n ? (2 * n - row) : row;
        for (int col =1; col<=row; col++)
        {
            cout <<"*"<<" ";
        }
        /*for (int col = 2; col <= row; col++)
        {
            cout <<"*";
        }*/

        cout << endl;
    }
    return 0;
}