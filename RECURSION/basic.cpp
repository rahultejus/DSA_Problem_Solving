#include<bits/stdc++.h>
using namespace std;
int count=0 ;
void print(int count){
    cout<<count<<" \n";
    count++;
    print(count);
}
int32_t main()
{
   print(0);
    return 0;
}