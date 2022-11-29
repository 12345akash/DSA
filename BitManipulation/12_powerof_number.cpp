#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter value of a and b" << endl;
    cin >> a >> b;

    int ans = 1;
    while (b > 0)
    {
        int last = b & 1;
        if (last == 1)
            ans = ans * a;

        a = a * a;

        b = b >> 1;
    }
    cout << ans;

    return 0;
}