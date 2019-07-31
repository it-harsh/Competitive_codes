#include<bits/stdc++.h>
using namespace std;
int main(){
        int i,k,num,tc;
        long temp,sum,leftval;
        cin>>tc;
        for(k=0;k<tc;k++)
        {
        unordered_map <long,int> m;
        vector <long> v;
                cin>>num;
                cin>>sum;
                for(i=0;i<num;i++)
                {
                    cin>>temp;
                    v.push_back(temp);
                    m[temp]++;;
                }
                bool flag = false;
                for(i=0;i<num&&!flag;i++){
                    leftval=sum-v[i];
                            if(leftval==v[i]){
                                if(m[leftval]>1)
                                flag=true;
                            }
                            else  if(m[leftval]>0){
                                flag=true;
                            }
                }
                if(flag)
                    cout<<"YES"<<"\n";
                else
                    cout<<"NO"<<"\n";

        }
        return 0;
}

