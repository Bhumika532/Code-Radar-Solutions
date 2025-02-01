#include<stdio.h>
int main(){
    int c,s;
    scanf("%d",&c);
    scanf("%d",&s);
    if(c<s){
        printf("Profit");
    }
    else if(c>s){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}