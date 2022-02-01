#include <bits/stdc++.h>
using namespace std;
int Bsearch(int arr[],int n,int y)
{ int low=0;
int high=n-1;
    while(low<=high)
    {
     int mid = (low+high)/2;
      if(arr[mid]==y)
      return mid;
      else if(arr[mid]<y)
      low=mid+1;
      else
      high=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    cout<<"element found at pos :" <<Bsearch(arr,n,1);
    return 0;
}