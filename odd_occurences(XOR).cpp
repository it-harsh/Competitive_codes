#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int i, k , j ,tc;
    long  num, xr=0;
    long temp;
    cin>>tc;
    for(k=0;k<tc;k++){

        cin >> num;
        xr=0;
        temp=0;
        for(i=0;i<num;i++)
        {
        cin >> temp;
            xr = xr ^ temp;
        }
    cout  <<  xr <<endl;
    }
return 0;
}
