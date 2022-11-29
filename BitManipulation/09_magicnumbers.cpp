#include<iostream>
using namespace  std;
int main()
{
  int n;
  cout<<"enter value of n"<<endl;
  cin>>n;

  int ans =0;
  int base=5;
  int count=0;
  while(n>0)
  {
      int last =n&1;
     n=n>>1;
     ans =ans+(last*base);
     base =base*5;
     count++;

  }  

 // cout<<ans;
  cout<<count;
} 
