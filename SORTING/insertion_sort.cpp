#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
       int key=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>key)
       {
        arr[j+1]=arr[j];    //for shifting element towards unsorted part.
        j--;
       } 
       arr[j+1]=key;
    }
}


int32_t main()
{
     int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    return 0;
}