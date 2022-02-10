#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n)
{
    bool swapped=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
        if(swapped==false)
        break;
    }
}
int main()
{
    int arr[]={10,9,11,12,13};
    int n=5;
    bubble(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i] <<" ";
    return 0;
}