#include<bits/stdc++.h>
using namespace std;


void segregate_array_elm(int arr[],int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]%2==0);
        do{
            j--;
        }while(arr[j]%2==1);
        if(i>=j)
        return;
        swap(arr[i],arr[j]);
    }
}
 void print(int arr[],int n)
 {
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  
 }

int32_t main()
{
   int n;
    int arr[]={1,4,6,2,9,7,5};
   n=sizeof(arr)/sizeof(arr[0]);
   segregate_array_elm(arr,n);
   print(arr,n);
    return 0;
}