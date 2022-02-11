#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[],int k,int n)
{
    long int count[k];
    for(int i=0;i<k;i++)
    count[i]=0;
    for(int i=0;i<n;i++)
    count[arr[i]]++;
    for(int i=1;i<k;i++)
    count[i]=count[i-1]+count[i];
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    arr[i]=output[i];
}
int main()
{
    int arr[]={8,8,4,4,5,8};
    int k=9,n=6;
    countSort(arr,k,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}