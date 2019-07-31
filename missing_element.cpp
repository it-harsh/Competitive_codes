#include<iostream>
#include<bits/stdc++.h>
int main(){

    int gsum=0,tsum=0,i,j,num;
    scanf("%d",&num);
    int arr[num - 1];
    for(i=0;i<num-1;i++){
        scanf("%d",&arr[i]);
        tsum=tsum+arr[i];
    }
    for(i=1;i<=num;i++){
        gsum=gsum+i;
    }
    printf("%d",gsum-tsum);
return 0;
}
