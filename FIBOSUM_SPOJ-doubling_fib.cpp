#include<bits/stdc++.h>
#define ull unsigned long long
#define M 1000000007

using namespace std;
pair<ull, ull> fib (ull n) {
    if (n == 0)
        return {0, 1};
    auto p = fib(n >> 1);
    p.first%=M;
    p.second%=M;
    ull c = ( p.first * ( (2 * p.second) % M  - p.first + M) % M );
    ull d = ( (p.first * p.first) % M   +   (p.second * p.second) % M ) % M ;
    if (n & 1){
        //cout<<"n : "<<n<<" c : "<<d<<" d : "<<c+d<<"\n";
        return {d, (c + d) % M};
    }else{
        //cout<<"n : "<<n<<" c : "<<c<<" d : "<<d<<"\n";
        return {c, d};
    }
}
int main(){

    int tc;
    cin>>tc;
    while(tc--){
        ull n,m,sum=0;
        cin>>n>>m;

            pair<ull,ull> a=fib(m);
            //cout<<a.first<<" "<<a.second<<"\n";
            sum = (sum + a.first + a.second ) % M;
            //cout<<"sum : "<<sum<<"\n";
            a = fib(n);
            sum = (sum - a.second + M) % M;
            //cout<<"sum : "<<sum<<"\n";

        cout<<sum<<"\n";
    }
}
