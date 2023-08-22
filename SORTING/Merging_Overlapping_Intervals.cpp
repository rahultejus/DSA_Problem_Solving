#include<bits/stdc++.h>
using namespace std;
struct interval{
   int start,end;
};
bool my_comp(point p1,point p2)
{
    return(p1.start<p2.start);
}
void Merge_intervals(interval arr[],int n)
{
    sort(arr,arr+n,my_comp);
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res].end>=arr[i].start)
        {
            arr[res].end=max(arr[res].end,arr[i].end);
            arr[res].start=min(arr[res].start,arr[i].start);
        }
        else{
            res++;
            arr[res]=arr[i];
        }
    }
    for(int i=0;i<=res;i++)
    {
        cout<<arr[i].start<<" "<<arr[i].end<<endl;
    }
}
int32_t main()
{
    int n;
    cin>>n;
  pair<int,int> arr[n]={{5,10},{3,5},{18,30},{2,7}};
  Merge_intervals(arr,n);
    return 0;
}