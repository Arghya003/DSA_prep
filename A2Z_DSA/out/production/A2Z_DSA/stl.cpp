#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* vector<int> v={1,3,6,2,8,4,11,5};
sort(v.begin(),v.end());
for (int i = 0; i <8; i++)
{
   cout<<v[i]<<endl;
}
// pair
pair<int,string>p = {1,"HELLO"};
cout<<p.first<<endl<<p.second;

vector<pair<int,string>>v;
for(int i=0;i<=5;i++)
v.push_back(i);

sort(v.begin(),v.end());
for(int i= v.begin();i<v.end();i++)
cout<<v[i];
set<int>s;
s.insert(10);
s.insert(15);
s.insert(20);

cout<<s.count(10)<<endl;
cout<<s.count(15)<<endl;
cout<<s.count(9)<<endl;
cout<<s.size()<<endl;
s.erase(15);
cout<<s.size()<<endl;
s.clear();
cout<<s.size()<<endl;*/
set<int>s;
s.insert(55);
s.insert(10);
s.insert(15);
s.insert(20);
s.insert(25);
auto it= s.begin();
it++;


cout<<*s.begin()<<endl;
cout<<*s.find(15)<<endl;
cout<<*s.lower_bound(10)<<endl;
s.find(it);
return 0;

}