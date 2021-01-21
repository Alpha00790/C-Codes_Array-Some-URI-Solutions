#include<bits/stdc++.h>
using namespace std;
int call_by_ref_ADD(int *x,int *y){
    *x = 20;
    *y = 10;
}
int main(){
    int x = 10;
    int y= 20;
    call_by_ref_ADD(&x,&y);
    cout<<x<<endl<<y;
}
