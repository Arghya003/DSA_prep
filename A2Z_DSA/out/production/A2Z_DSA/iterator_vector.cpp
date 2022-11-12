#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    for(int i=0;i<=5;i++)
    v1.push_back(i);

    for(int i=1;i<v1.size();i++)
    cout<<v1[i];

return 0;
}