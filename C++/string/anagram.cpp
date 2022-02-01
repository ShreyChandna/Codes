#include <bits/stdc++.h>
using namespace std;
    const int Char=256;
bool anagram(string &s1,string &s2)
{   int n1=s1.length();
    int n2=s2.length();
    if(n1!=n2)
    {
        return false;
    }
    int count[Char]={0};
    for(int i=0;i<s1.length();i++)
    { 
        count[s1[i]]++;
      
        count[s2[i]]--;
    }
    for(int i=0;i<Char;i++)
    {if(count[i]!=0)
    return false;
    }
    return true;
}
int main()
{

string s1="abcad";
string s2="cbdaa";
if(anagram(s1,s2))
cout<<"anagram";
else
cout<<"not anagram";
return 0; 
}



