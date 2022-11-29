#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter value of n" << endl;
    cin >> n;

    int count = 0, ans;
    while (n > 0)
    {
        int last = n & 1;
        if (last == 1)
        {
            ans = count * 2;
            break;
        }
        count++;
        n = n >> 1;
    }

    cout << ans;

    return 0;
}