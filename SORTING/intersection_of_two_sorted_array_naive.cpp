#include<bits/stdc++.h>
using namespace std;

void inter_sec(int a[],int b[],int m,int n)
{
  
    for(int i=0;i<m;i++)
    { 
        if(i>0 && a[i]==a[i-1])
        continue;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j]){
           cout<<b[j]<<" ";
            break;
            }
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
    inter_sec(a,b,m,n);
    return 0;
}