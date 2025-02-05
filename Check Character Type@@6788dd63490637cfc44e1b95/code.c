#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else if(('a'<=ch<='z')||('A'<=ch<='Z')){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
return 0;
}