#include<stdio.h>
int main(){
    int num,isprime=1;
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}