#include <bits/stdc++.h>
using namespace std;

void selection(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            min_ind=j; 
        }
          swap(arr[i],arr[min_ind]); 
    }
}
int main()
{
    int arr[]={3,10,2,1,5};
    int n=5;
    selection(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i] <<" ";
    return 0;
}