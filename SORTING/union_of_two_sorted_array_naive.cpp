#include<bits/stdc++.h>
using namespace std;

void uni_sort(int a[],int b[],int m,int n)
{
  int c[m+n] ;
  for(int i=0;i<m;i++)
    c[i]=a[i];
    for(int j=0;j<n;j++)
    c[j+m]=b[j];
    sort(c,c+m+n);
    for(int i=0;i<(m+n);i++)
    {
        if(i==0 || c[i]!=c[i-1])
        {
            cout<<c[i]<<" ";
        }
    }
  
}

int32_t  main()
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
    uni_sort(a,b,m,n);
    return 0;
}