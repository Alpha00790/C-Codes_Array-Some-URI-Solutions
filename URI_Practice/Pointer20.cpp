#include<bits/stdc++.h>
using namespace std;
int total;
int square(int x){
    return x*x;
}
int squareOfsum(int x,int y){
    int z = square(x+y);
    return z;
}
int main(){
    int a=4,b=8;
    total=squareOfsum(a,b);
    cout<<total<<endl;
}