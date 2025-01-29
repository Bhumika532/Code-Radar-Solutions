#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%f",&a,&b,&c);
    float d=a+b+c/3;
    printf("Average: %.2f\n", d);
    return 0;
}