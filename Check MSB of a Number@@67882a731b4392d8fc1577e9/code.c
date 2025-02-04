#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n & 0x80000000){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}