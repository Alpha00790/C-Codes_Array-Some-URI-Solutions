#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 5;
    int *p;
    p = &x;
    *p = 6;
    cout<<"x = "<<x<<endl;
    int **q;
    q = &p;
    printf("%d\n",p);
    printf("%d\n",*q);
    printf("%d\n",*(*q));
}
