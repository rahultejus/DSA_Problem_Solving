#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int m=3,n=2;
    int **arr;
    arr=new int *[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr[i][j]=i+j;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}