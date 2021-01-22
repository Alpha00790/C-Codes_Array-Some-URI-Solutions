
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = 1,y=2;
    while(x<=n){
        if(x%2==0){
            cout<<x<<"^"<<y<<" = "<<x*x<<endl;
        }
        x++;
    }
}
