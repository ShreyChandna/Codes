#include <bits/stdc++.h>
using namespace std;

bool isMatching(char a, char b)
{
    return ((a == '{' && b == '}') || (a == '(' && b == ')') || (a == '[' && b == ']'));
}
bool s(string str)
{
    stack<char> s;
    for(char x : str)
    {
        if(x=='{'||x=='('||x=='[')
        s.push(x);
    else{
    if(s.empty())
    return false;
    if(isMatching(s.top(),x)==false)
    return false;
    else
    s.pop();
    }
    }
    return(s.empty()==true);
}
int main()
{
    string str="((([])))";
    if (s(str))
    cout<<"balanced";
    else
    cout<<"unbalanced";
    return 0; 
}