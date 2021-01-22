#include<bits/stdc++.h>
using namespace std;
int loop(int n){
    int x=n,i=0;
    // for(i=0;i<6;i++){
        while(x>=n&&i<12){
            if(x%2!=0){
                cout<<x<<endl;
            }
            x++;
            i++;
        }
    // }
}
int main(){
    int n;
    cin>>n;
    loop(n);
}