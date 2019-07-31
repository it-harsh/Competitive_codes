#include<bits/stdc++.h>
using namespace std;
int main(){

    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    int brr[N],crr[N];
    brr[0]=arr[0];
    crr[N-1]=arr[N-1];
    for(int i=1;i<N;i++) brr[i]=brr[i-1]*arr[i];
    for(int i=N-2;i>=0;i--) crr[i]=crr[i+1]*arr[i];
    int sum;
    int ipt;
    cin>>ipt;
    if(ipt==0) sum=1*crr[ipt]*1;
    else if (ipt==N-1) sum=brr[ipt-1]*1;
    else sum=brr[ipt-1]*crr[ipt+1];
    cout<<sum;



return 0;}
