#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    unordered_map<int,int>mpp;
    int n=arr.size();
    int sum=0,maxi=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0)
        {
            maxi=i+1;
        }
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxi=max(maxi,i-mpp[sum]);
        }
        else{
            mpp[sum]=i;
        }
    }
    }
return maxi;

}
