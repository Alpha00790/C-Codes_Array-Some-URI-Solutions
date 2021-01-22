#include<bits/stdc++.h>
using namespace std;
int main(){
    double A[6],sum=0,c=0;
    for(int i=0;i<6;i++){
        cin>>A[i];
    }
    for(int j=0;j<6;j++){
        if(A[j]>0){
            sum+=A[j];
            c++;
        }
    }
    cout<<c<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<sum/c<<endl;
}
