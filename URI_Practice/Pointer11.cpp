#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int* p = &x;
    *p = 20;
    int **q = &p;
    int ***r = &q;
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",**q);
    printf("%d\n",**r);
    printf("%d\n",***r);
    ***r = 500;
    cout<<x<<endl;
}