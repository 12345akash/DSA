#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "enter value of n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int c = check(i);

        if (c == 1)
            cout << " " << i << " is prime number" << endl;
    }

    return 0;
}