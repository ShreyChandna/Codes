#include <bits/stdc++.h>
using namespace std;
void patt(string &s1, string &s2)
{
    int text = s1.length();
    int patt = s2.length();
    for (int i = 0; i <= text - patt; i++)
    {
        int j;
        for (j = 0; j < patt; j++)
        {
            if (s2[j] != s1[i + j])
                break;
        }
        if (j == patt)
            cout << "found at index:" << i << endl;
    }
}
int main()
{
    string s1 = "shreychandnaisniceshreyshrey";
    string s2 = "shrey";
    patt(s1, s2);
    return 0;
}
