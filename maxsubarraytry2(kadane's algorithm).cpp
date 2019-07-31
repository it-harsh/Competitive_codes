#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    int i,j,k,flag=0,tc,num,index;
    ll temp;
    ll curr_sum=0,max_sum=0;
    vector <ll> v;
    cin>>tc;
    for(k=0;k<tc;k++){
    cin>>num;
    curr_sum=0;
    max_sum=0;
    flag=0;
    v.clear();
    for(i=0;i<num;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
        ll curr_sum=0;
        ll max_sum=-1000000005;
            for(i=0;i<v.size();i++){
                curr_sum+=v[i];
                if(curr_sum>max_sum) max_sum=curr_sum;
                if(curr_sum<0) curr_sum=0;
            }
            cout  << max_sum<<endl;


    }
return 0;
}
