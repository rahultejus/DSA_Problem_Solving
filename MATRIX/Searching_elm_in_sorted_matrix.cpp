#include<bits/stdc++.h>
#define M 4
#define N 4

using namespace std;
//Time Complexity=O(M+N);
void print_elm_position_in_sorted(int arr[M][N],int key)
{
    int j=N-1,i=0;
   while(i<M && j>=0)
   {
     if(arr[i][j]==key)
     {
        cout<<"Index is ("<<i<<","<<j<<")"<<endl;
        return;
     }
     else if(arr[i][j]>key)
     {
        j--;
     }
     else{
        i++;
     }
   }
   cout<<"NOT Found"<<endl;
}
int32_t main()
{
   int arr[M][N]={{10,20,30,40},
                            {15,25,35,45},
                            {27,29,37,48},
                            {32,33,39,50}};
    print_elm_position_in_sorted(arr,90);

    return 0;
}