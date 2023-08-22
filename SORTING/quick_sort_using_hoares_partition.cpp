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
void q_sort(int arr[],int l,int h)
{
    if(l<h){
    int p=H_partition(arr,l,h);
    q_sort(arr,l,p);
    q_sort(arr,p+1,h);
    }
}
void print_elm(int arr[],int n)
{
   for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
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

// H_partition(arr,0,(n-1));
q_sort(arr,0,n-1);
cout<<"The sorted Array is"<<endl;
print_elm(arr,n);
    return 0;
}