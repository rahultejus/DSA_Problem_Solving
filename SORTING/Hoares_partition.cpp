#include<bits/stdc++.h>
using namespace std;

 int H_partition(int a[],int l,int h)
{
   int pivot=a[l];
   int i=l-1,j=h+1;
   while(true)
   {
    do
    {
        i++;
    } while (a[i]<pivot);
    do{
        j--;
    }while(a[j]>pivot);
    if(i>=j)  return j;
    swap(a[i],a[j]);
   }
}


int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
cout<<H_partition(arr,0,(n-1))<<endl;
    return 0;
}