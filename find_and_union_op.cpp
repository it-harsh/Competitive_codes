#include<bits/stdc++.h>
int _find(int);
using namespace  std;
int main(){
            ios::sync_with_stdio(false);
            cin.tie(0);
            int nodes;
            int edges;

            int _parent[nodes+1]={0},_rank[nodes+1]={0};
            int i,j;

            //vector<int>  n[nodes+1];

            for(i=1;i<nodes+1;i++){
                _parent[i]=i;
            }

            for(i=0;i<edges;i++){
            int u,v;
            cin>>u;
            cin>>v;
            //n[u].push_back(v);
            }



return 0;
}
int _find(int x,int *_parent){

    if(_parent[x]!=x)
        _parent[x]=_find(_parent[x],_parent);
    return  _parent[x];

}
