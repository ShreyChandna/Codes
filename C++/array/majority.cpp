// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++
//<-------------gfg---------------->
class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        int countx=0;
    int county=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        countx++;
        if(arr[i]==y)
        county++;
    }
    if(countx<county)
    return y;
    else if(county<countx)
    return x;
    else if(countx==county&&x<y)
    return x;
    else if(countx==county&&x>y)
    return y;
    else
    return EXIT_SUCCESS;
    }
};
//<------------------gfg------------------>
// { Driver Code Starts.
int main() {

    int t; // Testcases
    cin >> t; // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n; // Size of array
        cin >> n; // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n;i++) // Running a loop to input all elements sof arr
            cin >> arr[i];

        int x, y; // declare x and y
        cin >> x >> y; // input x and y
        Solution obj;
        cout << obj.majorityWins(arr, n, x, y)
             << endl; // calling the function that you complete
    }

    return 0;
}  
// } Driver Code Ends
