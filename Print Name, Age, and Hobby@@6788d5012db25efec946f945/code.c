#include<stdio.h>
int main(){
    char name[100];
    scanf("%s", &name);
    int age;
    scanf("%d", &age);
    char hobby[100];
    scanf("%s", &hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s", name,age,hobby);
    return 0;
}