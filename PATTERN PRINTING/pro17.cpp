#include<iostream>
using namespace std;
int main()
{
    int i,j,m=64;
    for(i=1;i<6;i++)
    {
        m++;
        for(j=0;j<i;j++){
        cout<<char(m)<<" ";
        }
        cout<<endl;
    }
}