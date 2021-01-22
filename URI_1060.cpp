#include<bits/stdc++.h>
using namespace std;
int main(){
    double arr[5];
    int d=0;
    for(int i =0;i<6;i++){
        cin>>arr[i];
    }
    for(int j = 0;j<6;j++){
        if(arr[j]>0){
            d++;
        }
    }
    cout<<d<<" valores positivos"<<endl;
}