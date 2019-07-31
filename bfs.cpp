#include<bits/stdc++.h>
using namespace  std;
int main(){
            ios::sync_with_stdio(false);
            cin.tie(0);
        int nodes,edges,start,i,j;
        cin>>nodes;
        cin>>edges;
        cin>>start;
        int arr[nodes];

        vector<int>  n[nodes+1];


        for(i=0;i<edges;i++){
            int u,v;
            cin>>u;
            cin>>v;
            n[u].push_back(v);
            n[v].push_back(u);
        }


//        for(i=start;i<=nodes;i++){
//               for(j=0;j<n[i].size();j++){
//               cout<<n[i].at(j);
//               }
//              cout<<endl;
//     }



        int  visited[nodes+1]={0};

        visited[start]=1;
        queue <int> que;
        que.push(start);

        while(que.size()>0){

                int tempvar=que.front();
                cout<<endl<<"que.front = "<<tempvar;
                que.pop();
                vector <int> temp;
                    temp=n[tempvar];
                           for(i=0;i<temp.size();i++){
                                            if(visited[temp[i]]==0){
                                                visited[temp[i]]=1;
                                                que.push(temp[i]);
                                            }
                                          for(int k=0;k<temp.size();k++)  cout<<endl<<temp[i]<<" "<<visited[temp[i]];
                            }
        }

return 0;
}
