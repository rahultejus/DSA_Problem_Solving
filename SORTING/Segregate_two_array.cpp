#include<bits/stdc++.h>
using namespace std;

 void print(int a[],int n)
 {
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
  
 }

void segregate_two_array(int arr[],int n)
{
    int j=0,temp[n];
    for(int i=0;i<n;i++){
         if(arr[i]<=0){
         temp[j]=arr[i];
         j++;
         }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
        temp[j]=arr[i];
        j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
   print(arr,n);
}


//time complexity O(n)
// But Number of traversal =3  and Aux space=O(n)
// Thats why not much efficient

int32_t main()
{
    int n;
    int arr[]={1,0,1,0,0,1,1,0,1,0,2,1,2,0,2};
    n=sizeof(arr)/sizeof(arr[0]);
    segregate_two_array(arr,n);
   

    return 0;
}