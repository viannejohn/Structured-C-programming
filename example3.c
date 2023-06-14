#include<stdio.h>

int main(){

    int age;
    char name[20];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your age is %d and your name is %s\n",age,name);

    return 0;

}