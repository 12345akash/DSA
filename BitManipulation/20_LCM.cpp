#include <bits/stdc++.h>
using namespace std;


int hcf(int a,int b)
{
    if(a==0)
    return b;
    else
    return hcf(b%a,a);
}

int main()
{
    int a,b;
    cout << "enter value of a and b" << endl;
    cin >>a>>b;
    int h =hcf(a,b);
  int lcm =(a*b)/h;
  cout<<lcm;
    return 0;
}