#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
   int p[5]={0,1,2,5,6};
   int wt[5]={0,2,3,4,5};
   int m=8,n=4;
   int a[5][9];
  int w;
   for(int i=0;i<=n;i++)
   {
    for( w=0;w<=m;w++){
        if(i==0||w==0){
       a[i][w]=0;}
       else if(wt[i]<=w){
        a[i][w]=max(a[i-1][w],a[i-1][w-wt[i]]+p[i]);
       }
       else{
        a[i][w]=a[i-1][w];
       }
    }
   }
    cout<<"The profit is given  "<<a[n][w]<<endl;
    return 0;
}