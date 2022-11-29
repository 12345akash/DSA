#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str ="puspendra";
    stack<char> s;

    for(int i=0;i<str.size();i++)
    {
        char ch =str[i];
        s.push(ch);
    }

    string ans ="";

    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    cout<<ans;

    return 0;


    

}