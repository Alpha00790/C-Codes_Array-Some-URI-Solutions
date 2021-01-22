#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,sum=0;
   while(1){
       cin>>a>>b;
       if(a>0&&b>0){
           if(a>b){
               swap(a,b);
               for(i=a;i<=b;i++){
                   sum=sum+i;
               }
               cout<<sum<<endl;
           }
       }
       else{
           break;
       }
   }
}
