//Time Complexity is theta(n)
//Its take linear time when the array is already shorted or in the middle array is shorted so after that is does not go ahead.

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
   bool swapped=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
          swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}
int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    bubble_sort(a,n);
     for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    return 0;
}