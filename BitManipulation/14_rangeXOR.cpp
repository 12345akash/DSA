#include <iostream>
using namespace std;
//that gives XOR from 0 to a;
int xor2(int a)
{
    if (a % 4 == 0)
        return a;
    if (a % 4 == 1)
        return 1;
    if (a % 4 == 2)
        return a + 1;
    return 0;
}

int main()
{
    int a, b;
    cout << "enter value of a and b" << endl;
    cin >> a >> b;
    int ans = xor2(b) ^ xor2(a - 1);
    cout << ans;

    return 0;
}