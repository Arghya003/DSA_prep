#include <iostream>
using namespace std;
int main()
{ int a=1000;
cout<<&a<<endl;

int *ptr;
ptr= &a;
cout<<ptr<<endl;
cout<<*ptr;


return 0;
}