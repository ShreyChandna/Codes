#include <bits/stdc++.h>
using namespace std;
int Bsearch(int arr[],int low,int high,int x)
{   if(low>high)
    return -1;
    {int mid=(low+high)/2;
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]>x)
    return Bsearch(arr,low,mid-1,x);
    else
    return Bsearch(arr,mid+1,high,x);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    cout<<"element found at pos :" <<Bsearch(arr,0,n-1,6);
    return 0;
}
