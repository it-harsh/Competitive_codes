#include<iostream>
#include<bits/stdc++.h>
#define  ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        ll a[n];

        for(int i=0;i<n;i++) cin>>a[i];
           ll min_num = a[0];
           ll  ans = 0;
           for(int i=0;i<n;i++){

            if(a[i]>min_num) ans=max(ans,a[i]-min_num);
            if(a[i]<min_num) min_num = a[i];
           }
        cout<< ans << "\n";
    }
return 0;
}
