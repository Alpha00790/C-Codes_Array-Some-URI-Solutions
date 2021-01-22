#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    double x,y,z;
    while(t--){
        cin>>x>>y>>z;
        cout<<fixed<<setprecision(1)<<((x*2)+(y*3)+(z*5))/10<<endl;
    }
}
