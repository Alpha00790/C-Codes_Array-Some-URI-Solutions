#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    // cout<<"R1 = "<<setprecision(5)<<(-b+sqrt((b*b)-4*a*c))/(2*a)<<"\n"<<"R2 = "<<setprecision(5)<<(-b-sqrt((b*b)-4*a*c))/(2*a);
     if(((b * b) - 4 * a * c) < 0 || a == 0){
     printf("Impossivel calcular\n");
    }
    else{
        cout<<"R1 = "<<fixed<<setprecision(5)<<(-b+sqrt((b*b)-4*a*c))/(2*a)<<"\n"<<"R2 = "<<fixed<<setprecision(5)<<(-b-sqrt((b*b)-4*a*c))/(2*a);
    }

} 
// cout<<"R1 = "<<setprecision(5)<<(-b+sqrt((b*b)-4*a*c))/(2*a)<<"\n"<<"R2 = "<<setprecision(5)<<(-b-sqrt((b*b)-4*a*c))/(2*a)