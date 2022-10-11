#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int s=j+1;
            int e=n-1;
            while(s<e){
            if(arr[i]+arr[j]+arr[e]+arr[s]==target)
            {
                return "Yes";
            }
            else if(arr[i]+arr[j]+arr[e]+arr[s]>target)
            {
                e--;
            }
            else{
                s++;
            }
        }
    }
}
        return "No";
    }
