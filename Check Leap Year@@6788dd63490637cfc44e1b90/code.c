#include<stdio.h>
//#include<conio.h>
int main()
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
    return 0;
}