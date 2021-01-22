#include<bits/stdc++.h>
using namespace std;
int main(){
    int id1,id2,unit1,unit2;
    double price1,price2;
    cin>>id1>>unit1>>price1;
    cin>>id2>>unit2>>price2;
    cout<<"VALOR A PAGAR:"<<" "<<"R$"<<" "<<(unit1*price1)+(unit2*price2)<<endl;
}