// printing a matrix using a seperate function 

#include<bits/stdc++.h>
using namespace std;
void print(int **arr,int m,int n){  //*arr  ==>in case of array of pointers.
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
int32_t main()
{
  int m=4,n=4;
   //int **arr;
//    arr=new int*[m]; ==> using double pointers
   int *arr[m] ; // ==>using array of pointers
   for(int i=0;i<m;i++)
   {
    arr[i]=new int[n]; 
   } 
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        arr[i][j]=i+1;
    }
   }
   print(arr,m,n);
    return 0;
}