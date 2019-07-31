#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,a[100],n,temp,xr=0;

    cin >> n;

    for(i=0;i<n-1;i++){
        cin >> temp;
        xr = xr  ^  temp;

    }


    for(i=1;i<=n;i++){
        xr =  xr ^  i;
    }

    cout  <<  xr;


return 0;
}
