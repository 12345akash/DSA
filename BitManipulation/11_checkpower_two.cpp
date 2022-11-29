#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter value of n" << endl;
    cin >> n;

    /*int count = 0;
    while (n > 0)
    {
        int last = n & 1;
        if (last == 1)
            count++;
        n = n >> 1;
    }

    if (count == 1)
        cout << "true";
    else
        cout << "false";*/


    int t = n & (n-1);
    if (t == 0)
        cout << "true";
    else
        cout << "false";
    return 0;
}