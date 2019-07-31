#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
int main(){

    int i,j,num,temp,total=0,mtotal;
    cin>>num;

    vector <int> v;
    vector  <int> sum;
    for(i=0;i<num;i++){
        cin>>temp;
        v.push_back(temp);
        total=total+temp;
        sum.push_back(total);
    }

    for(auto i=0;i<num;i++){
    for(auto j=i;j<num;j++){
            if(i>0){
                mtotal  =  sum.at(j)  - sum.at(i-1);
                cout<<"i  ="<<i<<" j  =  "<<j<<"   "<< mtotal << endl;}
            else{
                mtotal=sum.at(j);
                cout<<"i  ="<<i<<" j  =  "<<j<<"   "<< mtotal <<endl;}
    }
    cout<<endl;
    }

return 0;
}
