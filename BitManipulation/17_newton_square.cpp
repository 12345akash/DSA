#include <bits/stdc++.h>
using namespace std;

// time complexity= O(logn)
double sqrt(double n)
{
    double x = n;
    double root;
    while (true)
    {
        root = 0.5 * (x + (n / x));
        if (abs(root - x) < 0.5)
            break;

        x = root;
    }
    return root;
}

int main()
{
    int num;
    cout << "enter value of n " << endl;
    cin>>num;
    cout << sqrt(num);
    

    return 0;
}