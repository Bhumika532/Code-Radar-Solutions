#include<stdio.h>
//#include<matlib.h>
//#include<conio.h>
void  main()
{
    int n;
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
    return;
}