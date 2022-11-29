#include <bits/stdc++.h>
using namespace std;


void sqrt1(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cout << i << endl;
            else
            {
                cout << i << endl;
                cout << n / i << endl;
            }
        }
    }
}

int main()
{
    int n;
    cout << "enter value of n" << endl;
    cin >> n;
    sqrt1(n);

    return 0;
}