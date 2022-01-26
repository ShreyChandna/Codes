#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int s)
{
    int res = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] > res)
            res = arr[i];
    }
    return res;
}
int main()
{
    int b;
    cout << "\n enter the size of the array";
    cin >> b;
    int a[b];
    cout << "\n enter the array";
    for (int i = 0; i < b; i++)
        cin >> a[i];
    cout << largest(a, b);
    return 0;
}