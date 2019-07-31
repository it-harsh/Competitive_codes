#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,N,k,tc;
    cin>>tc;
    for(k=0;k<tc;k++){

                int left,right,temp,total_water=0;
                    cin>>N;
                    int arr[N];
                    int lmax[N];
                    int rmax[N];
                                for(i=0;i<N;i++){
                                    cin>>temp;
                                    arr[i]=temp;
                                    }
                                left=arr[0];
                                right=arr[N-1];
                                        for(i=0;i<N;i++){
                                            if(arr[i]>left){
                                               lmax[i]=arr[i];
                                               left=arr[i];
                                            }else{
                                               lmax[i]=left;
                                            }
                                        }
                                                    for(i=N-1;i>=0;i--)
                                                        if(arr[i]>right){
                                                            rmax[i]=arr[i];
                                                            right=arr[i];
                                                        }
                                                        else{
                                                            rmax[i]=right;
                                                        }

                            for(i=0;i<N;i++)
                                total_water=total_water+(min(rmax[i],lmax[i])-arr[i]);
                            cout<<total_water<<endl;;
    }

return 0;
}
