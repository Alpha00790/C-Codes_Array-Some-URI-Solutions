#include<bits/stdc++.h>
using namespace std;
int loop(int n){
    int i=1;
    while(i<=n){
        if(i%2!=0){
            cout<<i<<endl;
        }
        i++;

    }
    // return i;
}
int main(){
    int n;
    cin>>n;
    loop(n);
}
