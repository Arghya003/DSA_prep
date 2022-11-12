#include<iostream>
#include<bits/stdc++.h>
// BINARY SEARCH ALGORITHM
//TIME COMPLEXITY-O(N)
//SPACE COMPLEXITY-O(1)
using namespace std;
int index(){
    int n,s,e,x,mid;
    int ar[]={10,20,30,40,50,60,70,80,90};
    s=0;   // starting element
    n= sizeof(ar)/sizeof(ar[0]);  // size of the array
    e=n-1; // the right most element
    x=60;    // element to be found
    while (s<=e)      // loop to  till the value is found
    {
        mid=s+(e-s)/2;       // middle most element- N/2
        if(ar[mid]==x)       // if the middle most element is x 
        return mid;
        else if(ar[mid]<x)   // if x is bigger than mid
        s=mid+1;
        else
        e=mid-1;              // if x is less than mid
    }
    return -1;

}
int main()
{ 
    int n, x= 60;
 n= index();
 if(n!=-1)
 cout<<"60 IS FOUND AT ="<<n<<endl;
 else
 cout<<"not found"<<endl;


}