#include<stdio.h>
int main(){
    int num,isprime=1;
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            isprime=1;
            break;
        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("NotPrime");
    }
    return 0;
}