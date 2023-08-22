#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=0;j<i;j++){
        cout<<"*";
        }
         cout<<endl;
    }
    for(i=4;i>=0;i--)
    {
        for(j=0;j<i;j++){
        cout<<"*";
        }
         cout<<endl;
    }
    
    return 0;
}