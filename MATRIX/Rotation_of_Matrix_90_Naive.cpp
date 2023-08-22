#include<bits/stdc++.h>
#define m 4
#define n 4
using namespace std;
//Time complexity =O(m*n)
//Aux Space=O(n*n)
// By using transpose and after that we do reverse of column then by using that we get 90 degree rotated matrix
//There is need of O(1) Aux Space
void Rotate_90(int arr[m][n])
{
    int temp[n][n];
    int temp1[n][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        temp[n-j-1][i]=arr[i][j];
        cout<<endl;
    }
    // for(int i=0;i<m;i++){
    // for(int j=0;j<n;j++)
    // cout<<temp[i][j]<<" ";
    // cout<<endl;
    // }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        temp1[n-j-1][i]=temp[i][j];
        cout<<endl;
    }
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    cout<<temp1[i][j]<<" ";
    cout<<endl;
    }
}

int32_t main()
{
    int arr[m][n]={{1,2,3,4},
                             {5,6,7,8},
                             {5,4,3,2},
                             {9,5,2,0}};
     Rotate_90(arr);
    return 0;
}