

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comparision(Job a, Job b)
    {
        return (a.profit>b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comparision);
        int maxi=arr[0].dead;
        for(int i=1;i<n;i++)
        {
            maxi=max(maxi,arr[i].dead);
        }
        int slot[maxi+1];
        for(int i=0;i<=maxi;i++)
        slot[i]=-1;
        
        int countjob=0,jobprofit=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(slot[j]==-1)
                {
                slot[j]=i;
                countjob++;
                jobprofit+=arr[i].profit;
                break;
                }
            }
        }
          vector<int>ans;
  ans.push_back(countjob);
        ans.push_back(jobprofit);
        return ans;
    } 
    
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends
