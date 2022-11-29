#include <bits/stdc++.h>
using namespace std;

// time complexity= O(logn)
double sqrt(int num, int p)
{
    int l = 0;
    int h = num;
    double root = 0.0;
    while (l <= h)
    {

        int mid = l + (h - l) / 2;
        if ((mid * mid) == num)
            cout << mid;
        else if ((mid * mid) > num)
            h = mid - 1;
        else
            l = mid + 1;
    }
    double incr = 0.1;
    for (int i = 0; i < p; i++)
    {
        while (root * root <= num)
        {
            root += incr;
        }
        root -= incr;
        incr /= 10;
    }
return root;
}

int main()
{
    int num, p;
    cout << "enter value of n and p" << endl;
    cin >> num >> p;
    cout << sqrt(num, p);

    return 0;
}