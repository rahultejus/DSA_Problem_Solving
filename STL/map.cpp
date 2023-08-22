#include<iostream>
#include<map>
#include<iterator>
using namespace std;
void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr :m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

}

int main()
{
    map <int,string> m;
    m[1]="abcd";
    m[9]="ghfdhk";
    m[5]="jkld";
    // m.insert({2,"ajasjs"});
    //   map <int,string> :: iterator it;
    //   for(it=m.begin(); it!=m.end();++it)
    //   {
    //     cout<<(it->first)<<" "<<(it->second)<<endl;
    //   }
   auto it= m.find(8);
   m.erase(9);

    print(m);
  return 0;
}