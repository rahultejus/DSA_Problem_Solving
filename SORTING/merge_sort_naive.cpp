#include<bits/stdc++.h>
using namespace std;
void merge_sort(int a[],int b[],int m,int n )
{
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
     for(int i=0;i<n;i++)
    {
        c[i+m]=b[i];
    }
    sort(c,c+m+n);
    for(int i=0;i<(m+n);i++)
    {
        cout<<c[i]<<" ";
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
    //  int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
   merge_sort(a,b,m,n);
    return 0 ;
}