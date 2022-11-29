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
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
            for (int space = 1; space < row; space++)
            {
                cout << " ";
            }
        
        }

        cout << endl;
    }
    return 0;
}