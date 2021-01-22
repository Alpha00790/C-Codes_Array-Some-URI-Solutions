#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x=0,n,y=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>=10&&n<=20){
            x++;
        }
        else{
            y++;
        }

    }
    cout<<x<<" in"<<endl<<y<<" out"<<endl;

}
