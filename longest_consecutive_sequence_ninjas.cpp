#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int>temp;
    for(int i=0;i<n;i++)
    {
        temp.insert(arr[i]);
    }
    int count=0;
    int ans=1;
    for(int i=0;i<n;i++)
    {
        int x=arr[i]-1;
        if(temp.find(x)==temp.end()){
            x=x+1;
            while(temp.find(x)!=temp.end()){
                count++;
                x=x+1;
            }
            ans=max(ans,count);
        }
        count=0;
    }
    return ans;
}
        
