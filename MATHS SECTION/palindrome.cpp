#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;

int main ()
{
  int n;
  cin>>n;

 int num1=n;
  int arr[100];
  int i=0;

  while(n>0)
  {
    arr[i]=n%10;
    n=n/10;
    i++;
  }
 int num=0;
 int j=0;
 while(j<i)
 {
    num=num*10+arr[j];
    j++;
 }
 if(num==num1)
 {
    cout<<"Palindrome"<<endl;
 }
 else{
    cout<<"Not A Palindrome"<<endl;
 }
  return 0;
}