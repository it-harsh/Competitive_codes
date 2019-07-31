#include<bits/stdc++.h>
using namespace  std;
int main(){
            ios::sync_with_stdio(false);
            cin.tie(0);

            string a="data";
            string b="dent";

            int matrix[a.length()+1][b.length()+1]={0};

            int i,j;

            for(i=0;i<a.length()+1;i++)  matrix[i][0]=i;
            for(i=0;i<b.length()+1;i++)  matrix[0][i]=i;


            for(i=0;i<a.length()+1;i++){
                for(j=0;j<b.length()+1;j++)
                cout<<"\t"<<matrix[i][j];
                cout<<"\n";
            }
            cout<<"\n\n\n";

            for(i=0;i<a.length()+1;i++){
                for(j=0;j<b.length()+1;j++){

                    if(i==0||j==0)
                        matrix[i][j]=0;

                    if(a[i-1]==b[j-1]) {matrix[i][j]=matrix[i-1][j-1];}
                    else{
                        int temp;
                        temp=min(1+matrix[i-1][j],1+matrix[i-1][j-1]);
                        matrix[i][j]=min(1+matrix[i][j-1],temp);
                    }
                }
            }

            for(i=0;i<a.length()+1;i++){
                for(j=0;j<b.length()+1;j++)
                cout<<"\t"<<matrix[i][j];
                cout<<"\n";
            }

            cout<<matrix[a.length()][b.length()];
return 0;
}
