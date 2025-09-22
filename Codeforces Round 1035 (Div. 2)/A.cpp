#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        long long a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a==b){
            cout<<0;
        } else if(a>b){
            //if((a&1) && b==a-1) cout<<y;
            if(a % 2 == 1 && b == a - 1) cout << y; 
            else cout<<-1;
        } else {
            long long r=0;
            for(long long i=a;i<b;i++){
                r += (i&1? x : min(x,y));
            }
            cout<<r;
        }
        if(T) cout<<"\n";
    }
    return 0;
}