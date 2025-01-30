#include<stdio.h>
int main(){
    char ch[100];
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}