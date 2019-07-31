#include<bits/stdc++.h>
using namespace  std;
int _parent[1000]={0},_rank[1000]={0};
int _find(int x){
    if(_parent[x]!=x) _parent[x]=find(&_parent[x]);
    return _parent[x];
}
int _union(int a,int b){
    int  x=_find(a),y=_find(b);
    if(x==y)
        return ;
    if(rank[x]>rank[y])
        _parent[y]=x;
    else if(rank[x]<rank[y])
        _parent[x]=y;
    else{
        _parent[x]=y;
        rank[x]++;
    }

}
int main(){
            ios::sync_with_stdio(false);
            cin.tie(0);

            int n,m,i,j;
                    cin>>n;
                    cin>>m;

            pair <int,pair<int,int>> p[m];

            for(i=0;i<m;i++){
                    int u,v,w;
                cin>>u>>v>>w;
                p[i]=make_pair(w,make_pair(u,v));

            }
            sort(p,p+m);

            for(i=1;i<n+1;i++){
                __parent[i]=i;
            }



return 0;
}

