#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,num,temp;

    vector <int> v;

    cin >> num;
    v.push_back(0);
    for(i=0;;i++){
        cin >>  temp;
        if(temp!=-1)
        v.push_back(temp);
        else
            break;
    }

    sort(v.begin(),v.end());

    cout  << v.at(num);

return 0;
}


