#include<bits/stdc++.h>
#define tst cout<<" the line was here";
using namespace std;
int main(){

            int length;
            cin>>length;
            int lps[length][length];
            int i,j,diff;
            string s2,s1;

            cin>>s1;
            s2=s1;

            for(i=0;i<s1.length();i++)
                cout<<s2[i];

            for(i=0;i<length;i++){
                for(j=0;j<length;j++){
                        lps[i][j]=0;
                }
            }

             for(i=0;i<length;i++)   lps[i][i]=1;

            for(diff=0;diff<length;diff++){
                    for(i=0,j=i+diff;j<length;i++,j++){

                }
            }

return 0;
}
