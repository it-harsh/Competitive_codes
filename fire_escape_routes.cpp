#include<bits/stdc++.h>
using namespace  std;
int visited[100001]={0};
int bfs(int node,vector<int> n[]){

            visited[node]=1;
        queue <int> que;
        que.push(node);
                int count;
        while(que.size()>0){
                int tempvar=que.front();
                que.pop();
            vector <int> temp;
                    temp = n[tempvar];

                           for(int i=0;i<temp.size();i++){
                                            if(visited[temp[i]]==0){
                                                        count++;
                                                visited[temp[i]]=1;
                                                que.push(temp[i]);
                                                }
                            }
                            cout<<"\ncount node= "<<node<<" "<<count;
            return count;

        }
}
int main(){
            ios::sync_with_stdio(false);
            cin.tie(0);

            int tc,i;
            cin>>tc;
            while(tc--){

                            int  ne,nf;
                            cin>>ne;
                            cin>>nf;

                        vector<int>  n[ne+1];


                        for(i=0;i<nf;i++){
                        int u,v;
                        cin>>u;
                        cin>>v;
                        n[u].push_back(v);
                        n[v].push_back(u);
                    }

            vector<int> ng;
            int count,total=1,t;

            for(i=1;i<=ne;i++){
                    if(visited[i]==0)
                    {
                        t=bfs(i,n);
                        total=total*t;
                        ng.push_back(t);
                    }
            }
            cout<<"\nfer  ="<<ng.size()<<" capns ="<<total;
    }
return 0;
}

