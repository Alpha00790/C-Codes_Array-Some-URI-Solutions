#include<bits/stdc++.h>
using namespace std;
int call_by_value(int x,int y){
    x = 20;
    y = 10;

}
int main(){
    int x = 10;
    int y= 20;
    call_by_value(x,y);
    cout<<x<<endl<<y;
}