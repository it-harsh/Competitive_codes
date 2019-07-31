#include<bits/stdc++.h>
using namespace  std;
int main(){
            ios::sync_with_stdio(false);
            cin.tie(0);

            int n,m;
            cin>>n>>m;

            int a1[n+1],a2[m+1];
            int i,j,k,l,r;

            for(i=0;i<n;i++) cin>>a1[i];
            for(i=0;i<m;i++) cin>>a2[i];

            a1[n]=1000006;
            a2[m]=1000006;
            l=0;
            r=0;
            int a[n+m]={0};
            for(i=0;i<n+m;i++){

                if(a1[l]<a2[r]){
                        a[i]=a1[l];
                        l++;
                }else {
                        a[i]=a2[r];
                        r++;
                }

            }

            for(i=0;i<n+m;i++) cout<<"\n"<<a[i];

return 0;
}
