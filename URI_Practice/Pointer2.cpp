#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int *p;
    p = &a;
    a = 5;
    cout<<p<<endl;
    *p = 100;
    cout<<a<<endl;
}