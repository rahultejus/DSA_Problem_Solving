#include<iostream>
#define M 4
#define N 4
using namespace std;
// int M=4,N=4;
//Time complexity =O(M*N);
//Aux Space=O(1);
void PrintSnack(int arr[M][N])
{
    for(int i=0;i<M;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<N;j++)
            cout<<arr[i][j]<<" ";
        }
        else{
             for(int j=N-1;j>=0;j--)
            cout<<arr[i][j]<<" ";
        }
        }

    }

int main()
{
    int arr[M][N]={{1,2,3,4},
                             {5,6,7,8},
                             {5,4,3,2},
                             {9,5,2,0}};
    PrintSnack(arr);
}