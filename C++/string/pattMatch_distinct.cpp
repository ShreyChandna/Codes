#include <bits/stdc++.h>
using namespace std;
void patt(string &text,string &patt)
{
    int n=text.length();
    int m=patt.length();
    for(int i=0;i<=n-m;)
    {
        int j;
        for(j=0;j<m;j++)
            if(patt[j]!=text[i+j])
            break;
            if(j==m)
            cout<<"found at index:"<<i<<endl;
            if(j==0)
            i++;
            if(j!=0)
            i+=j;
    
    }
}
int main()
{
    string s1="shreychandnaisniceshreyshrey";
    string s2="shrey";
    patt(s1,s2);
    return 0;
}