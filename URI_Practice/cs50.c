// #include<iostream>
#include<stdio.h>
// I did it from scratch so many reverse engineering ! God!!!!
// using namespace std;
int main()
{
    int n;
    do
    {
        printf("Height: ");
        scanf("%i",&n);
    }
    while (n < 1 ||  n >= 9);
    for (int i = n-1 ; i > -1; i--)
    {
        // cout<<".";
        for (int j = i  ; j > 0; j--)
        {
            // cout << " ";
            printf(" ");
        }
        for (int j = i; j < n; j++)
        {
            // cout << "#";
            printf("#");
        }

        printf("\n");
    }

}
