#include<bits/stdc++.h>
using namespace std;

void dutch_national_sort(int arr[],int n,int low,int high)
{
    int h=n-1,l=0,mid=0;
    while(mid<=h)
    {
        if(arr[mid]<=low)
        {
            swap(arr[mid],arr[l]);
            l++;mid;
        }
        else if(arr[mid]>low || arr[mid]<high)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int32_t main()
{
   int n;
    int arr[]={10,5,6,3,20,9,40,2};
    n=sizeof(arr)/sizeof(arr[0]);
    dutch_national_sort(arr,n,5,10);
    return 0;
}