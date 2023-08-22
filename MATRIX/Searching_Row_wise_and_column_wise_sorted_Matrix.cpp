#include<bits/stdc++.h>
#define M 4
#define N 4
using namespace std;
//Time Complexity=O(M*N)
//but find a solution of O(M+N)
void find_elm_from_sorted(int arr[M][N],int key)
{
    for(int i=0;i<M;i++)
    {
    for(int j=0;j<N;j++)
    {
        if(arr[i][j]==key)
           {
            cout<<"The index is("<<i<<" ,"<<j<<")"<<endl;
            return;
           }
         }
    }
    cout<<"Not found"<<endl;
}

int32_t main()
{
    int arr[M][N]={{10,20,30,40},
                            {15,25,35,45},
                            {27,29,37,48},
                            {32,33,39,50}};
       find_elm_from_sorted(arr,40);
     return 0;
}