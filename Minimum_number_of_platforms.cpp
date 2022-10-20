 int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int plat_nead=1,result=1,i=1,j=0;
    while(i<n && j<n)
    {
        if(at[i]<=dt[j])
        {
            plat_nead++;
            i++;
        }
        else if(at[i]>dt[j])
        {
            plat_nead--;
            j++;
        }
        if(plat_nead>result)
            result=plat_nead;
}
    return result;
}
