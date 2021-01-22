#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b;
        cin>>a>>b;
        if(a!=0&&b!=0){
            cout<<fixed<<setprecision(1)<<a/b<<endl;
        }
        else if(b==0){
            cout<<"divisao impossivel"<<endl;
        }
        else if(a==0){
            cout<<fixed<<setprecision(1)<<a/b<<endl;
        }
        else if(a==0&&b==0){
            cout<<"divisao impossivel"<<endl;
        }
    }
}