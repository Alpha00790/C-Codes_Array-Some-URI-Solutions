#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=0;
    for(int i = 0;i<100;i++){
        cin>>n;
        if(max<n){
            max = n,p=i+1;
        }
    }
    cout<<max<<endl<<p<<endl;
}