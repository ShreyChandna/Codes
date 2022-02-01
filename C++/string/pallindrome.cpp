#include <bits/stdc++.h>
using namespace std;
bool isPallindrome(string str)
{
    int begin=0;
    int end= str.length()-1;
    while(begin<end)
    {if(str[begin]==str[end])
    {
     begin++;
     end--;   
    }
    else 
    return false;
    }
    return true;
}
int main()
{
    string str="abcba";
    cout<< (isPallindrome(str)==1?"Pallindrome":"Not a pallindrome");
    return 0;
}
