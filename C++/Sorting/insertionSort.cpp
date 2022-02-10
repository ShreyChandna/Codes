#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {arr[j+1]=arr[j];
        j--;}
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]={10,50,20,90,30,21,45};
    int n=7;
    insertion(arr,n);
    for(int x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}