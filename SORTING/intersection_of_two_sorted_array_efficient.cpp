#include<bits/stdc++.h>
using namespace std;
 void inter_sec_eff(int a[],int b[],int m,int n)
 {
    int i=0,j=0;
  while(i<m && j<n)
  {
    if(i>0 && a[i]==a[i-1])
    {
        i++;
        continue;
    }
    if(a[i]<b[j])
    {
      i++;
    }
     else if(a[i]>b[j])
    {
      j++;
    }
   else
    {
     cout<<a[i]<<" ";
     i++;
     j++;
    }
  }
 }

int32_t main()
{
    int n,m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    inter_sec_eff(a,b,m,n);
    return 0;
}