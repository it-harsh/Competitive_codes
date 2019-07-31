#include<bits/stdc++.h>
using namespace  std;
int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);

        int nodes,edges,s,i,j;
        cin>>nodes;
        cin>>edges;
        //cin>>s;

        int arr[nodes+1]={0};

        vector<int>  n[nodes+1];

        for(i=0;i<edges;i++){
            int u,v;
            cin>>u;
            cin>>v;
            n[u].push_back(v);
            arr[v]++;
        }


        bool  flag  = true;

        while(flag){

            int  temp =1;
//can be made more effecient  by using  que i.e. when we find the element with zero frequency ,it should  be pushed and used afterwards
                        for(i=1;i<nodes+1;i++)
                        {
                            if(arr[i]==0){
                                temp=i;
                                break;
                            }
                            if(i==nodes)
                            {
                                flag=false;
                            }
                        }
                        if(!flag){; break;}

            vector <int> v  = n[temp];

            for(i=0;i<v.size();i++) arr[v[i]]--;

            arr[temp]=-1;
            cout<<temp<<"  ";

        }

return 0;
}
