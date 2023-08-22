#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=19;
   int arr[]={1,2,3,4,4,3,4,5,6,7,8,9,10,11,5,6,4,3,10};
// 
//    int n=sizeof(arr);
   
   int hash[12]={0}; //0 to 11, 12 , 13 
   for(int i=0; i<n ; i++){
    hash[arr[i]]+=1;
}
    for(int j=1; j<12; j++){
        cout<<j<<"->"<<hash[j]<<endl;
    }
    cout<<hash[26]<<endl;
    
    return 0;
}