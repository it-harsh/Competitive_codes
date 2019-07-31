#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
        int i,j,num,qry;
        long temp;
        unordered_map <long,long> m;
        vector <long> v;
        cin>>num;
        cin>>qry;
        for(i=0;i<num;i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        for(i=0;i<num;i++){
            m[v[i]]++;
        }
        for(i=0;i<qry;i++){
            cin>>temp;
            cout<<m[temp]<<endl;
        }
        return 0;
}

