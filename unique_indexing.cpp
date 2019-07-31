#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int num,temp;
    cin>>num;
    unordered_map  <int,int> m;
    for(int i=0;i<num;i++){
        cin>>temp;
        m[temp]=i+1;
    }
    for(int i=1;i<=num;i++)
        cout<<m[i]<<" ";
return  0;
}
