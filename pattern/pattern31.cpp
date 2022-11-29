#include <iostream>
using namespace std;
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    int original = n;
    n = 2 * n;

    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= n; col++)
        {
            int ateveryindex = original - min(min(row, col), min(n - row, n - col));
            cout << ateveryindex << " ";
        }
        cout << endl;
    }
    return 0;
}