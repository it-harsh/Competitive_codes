#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
int main(){

    int i,j,k,temp,tc;
    unsigned long long int num;
       cin>>tc;
    for(k=0;k<tc;k++)
    {
        temp=0;
        cin>>num;
        if(num>0)
        for(i=0;num!=0;i++)
        {
            if((num&1)==1)
                    temp++;
            num=num>>1;
        }
        cout<<temp<<endl;;
    }


return 0;}
