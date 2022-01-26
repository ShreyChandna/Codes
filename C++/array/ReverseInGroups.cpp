// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int temp=k-1;
        int temp2=n-1;
        for(int i=0;i<k-1;i++)
        {   if(i<temp)
            {swap(arr[i],arr[temp]);
            temp--;
            }
        }
        for(int i=k;i<n;i++)
        {
            if(i<temp2)
            {swap(arr[i],arr[temp2]);
            temp2--;
            }
        
        }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends