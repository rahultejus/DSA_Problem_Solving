// printing a matrix using a seperate function 

#include<bits/stdc++.h>
using namespace std;
void print(vector<int>arr[],int m,int n){  //*arr  ==>in case of array of pointers.
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
int32_t main()
{
  int m=3,n=2;
 vector<int>arr[m];
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    arr[i].push_back(i*2);
   } 
   print(arr,m,n);
    return 0;
}