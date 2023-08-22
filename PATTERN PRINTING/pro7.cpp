#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
       for(j=i;j<=5;j++)
       {
        cout<<" ";
       }
       for(k=0;k<=i;k++)
       {
        cout<<"*";
       }
       for(k=1;k<=i;k++)
       {
        cout<<"*";
       }
       cout<<endl;
    } 
    return 0;
}