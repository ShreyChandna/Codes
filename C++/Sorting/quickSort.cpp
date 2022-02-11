#include <bits/stdc++.h>
using namespace std;

int quick(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]);
    }
}
void quickSort(int arr[],int l,int h)
{   if(l<h)
    {int p=quick(arr,l,h);
    quickSort(arr,l,p);
    quickSort(arr,p+1,h);
    }
}
int main()
{
    int arr[]={5,3,8,4,2,7,1,10};
    int l=0,h=7;
    quickSort(arr,l,h);
    for(int x : arr)
    cout<<x<<" ";
    return 0;
}