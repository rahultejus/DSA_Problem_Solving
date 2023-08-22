// Time Complexity=O(n^2)

#include <bits/stdc++.h>
using namespace std;
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int arr[], int n)
{
  //    int temp[n];
    int min_ind = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[min_ind] < arr[j])
                min_ind= j;
        }
        if (min_ind!= i)
            swap(&arr[min_ind], &arr[i]);
    }
}
int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selection_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}