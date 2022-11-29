#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
        for (int i = 1; i <= row; i++)
        {
            cout << " ";
        }
    }
    return 0;
}