#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;
int search(int arr[],int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x)return i;
        if(arr[i]>x)return -1;
        i++;
    }

}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<search(arr,20);
  return 0;
}