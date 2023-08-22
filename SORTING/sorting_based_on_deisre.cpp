#include<bits/stdc++.h>
using namespace std;

struct point{
    int start,end;
};
 bool mycmp(point p1,point p2)
 {
    return (p1.end<p2.end);
 }
int32_t main()
{
     point arr[]={{2,4},{8,2},{5,7},{4,6}};
     int n=sizeof(arr )/sizeof(arr[0]);
     sort(arr,arr+n,mycmp);
     for(int i=0;i<n;i++)
     {
        cout<<"["<<arr[i].start<<","<<arr[i].end<<"]";
     }
    return 0;
}