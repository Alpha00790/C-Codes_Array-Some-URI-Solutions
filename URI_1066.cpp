#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=5,n;
    int e=0,o=0,p=0,ne=0;
    while(t--){
        cin>>n;
        if(n%2==0){
            e++;
        }
         if(n%2!=0){
            o++;
        }
         if(n<0){
            ne++;
        }
         if(n>0){
            p++;
        }
    }
    cout<<e<<" valor(es) par(es)"<<endl;
    cout<<o<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<ne<<" valor(es) negativo(s)"<<endl;
}
