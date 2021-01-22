#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>0&&(n%2==0)){
            cout<<"EVEN POSITIVE"<<endl;
        }
        else if(n>0&&(n%2!=0)){
            cout<<"ODD POSITIVE"<<endl;
        }
        else if(n<0&&(n%2==0)){
            cout<<"EVEN NEGATIVE"<<endl;
        }
        else if(n<0&&(n%2!=0)){
            cout<<"ODD NEGATIVE"<<endl;
        }
        else{
            cout<<"NULL"<<endl;
        }
    }
}