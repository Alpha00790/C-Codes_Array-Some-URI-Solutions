#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b=0,sum=0;
    while(1){
        if(b==2)
            break;
        cin>>a;
        if(a>=0&&a<=10){
            b++;
            sum=sum+a;
        }
        else{
            cout<<"nota invalida\n";
        }
    }
    cout<<fixed<<setprecision(2)<<"media = "<<sum/2<<endl;
}
