#include<bits/stdc++.h>
#define m 4
#define n 4
using namespace std;
//Time Complexity=theta(m+n);
void Print_Boundary_elm(int arr[m][n])
{
    if(m==1)
    {
        for(int j=0;j<n;j++)
        cout<<arr[0][j]<<" ";
    }
    else if(n==1)
    {
        for(int i=0;i<m;i++)
        cout<<arr[i][0]<<" ";
    }
    else{
        for(int j=0;j<n;j++)
         cout<<arr[0][j]<<" ";
        for(int i=1;i<m;i++)
        cout<<arr[i][n-1]<<" ";
        for(int j=n-2;j>=0;j--)
        cout<<arr[m-1][j]<<" ";
        for(int i=m-2;i>0;i--)
        cout<<arr[i][0]<<" ";
    }
    
    
}

int32_t main()
{
   int arr[m][n]={{1,2,3,4},
                             {5,6,7,8},
                             {5,4,3,2},
                             {9,5,2,0}};
    Print_Boundary_elm(arr);
    return 0;
}