#include<bits/stdc++.h>
using namespace std;
void increment(int *p,int *q){
    *p = ((*p * *q))/100;
}
int main(){
    int a,b;
    a = 400,b=15;
    increment(&a,&b);
    cout<<a;
}
 