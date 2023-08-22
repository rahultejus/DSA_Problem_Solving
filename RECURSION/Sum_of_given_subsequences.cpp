#include <bits/stdc++.h>
using namespace std;
bool printSum(int n, int s, int sum, int arr[], vector<int> &ds, int ind)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else{
        return false;
        }
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
   if(printSum(n, s, sum, arr, ds, ind + 1)==true)
    return true;
    ds.pop_back();
    s -= arr[ind];
   if(printSum(n, s, sum, arr, ds, ind + 1)==true)
    return true;
    return false;
}

int32_t main()
{
    int n = 4;
    int arr[] = {1, 2, 1, 3};
    int sum = 3;
    vector<int> ds;
    printSum(n, 0, sum, arr, ds, 0);
    return 0;
}