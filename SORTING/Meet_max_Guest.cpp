#include<bits/stdc++.h>
using namespace std;

int Meet_max_guest(int ar[],int dep[],int n)
{
    sort(ar,ar+n);
    sort(dep,dep+n);
    int i=1,j=0,curr=1,ans=1;
    while(i<n && j<n)
    {
        if(ar[i]<=dep[j])
        {
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        ans=max(ans,curr);
    }
        return ans;
}


int32_t main()
{
   int n;
   
   int ar[]={900,600,700,800};
   int dep[]={1000,800,730,1100};
   n=sizeof(ar)/sizeof(ar[0]);
   cout<<Meet_max_guest(ar,dep,n);
    return 0;
}