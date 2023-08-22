#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
   int arr[100];
    int n;
    cin>>n;
    int i=0;
       int count=0;
    while(n>0)
    {
        arr[i]=n%2;
        i++;
        n=n/2;
    }
    // for(int j=i-1;j>=0;j--)
    // {
    //     cout<<arr[j];
    // }
 
    for(int k=(i-1);k>=0;k--)
    {
       count+=arr[k]*(pow(2,k));
    }
    cout<<count<<endl;
    return 0;
}