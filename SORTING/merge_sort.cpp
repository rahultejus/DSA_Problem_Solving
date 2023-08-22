#include<bits/stdc++.h>
using namespace std;


void merge_sort(int a[],int b[],int m,int n)
{
    int c[m+n];
    int k=0,i=0,j=0;
 
    while(i<m && j<n){
    if(a[i]<b[j])
      cout<<a[i++]<<" ";
      else 
      cout<<b[j++]<<" ";
    }
    for(;i<m;i++)
    {
        cout<<a[i]<<" ";
    }
    for(;j<n;j++)
    {
        cout<<b[j]<<" ";
    }
     
}
// void print(int c[],m,n);

 
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
    merge_sort(a,b,m,n);
   
    return 0;
}