#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
#include<limits.h>

int main()
{
    const char password[] = "password123";
    char input[20];
    bool isAuthenticated = false;

    do{
        printf("Enter your password: ");
        scanf("%s", input);
        
        if(strcmp(input, password) == 0){
        isAuthenticated = true;
        }else{
        printf("Incorrect password. Try again.\n");
        }
    }while (!isAuthenticated);

    printf("Access granted!\n");
   return 0;
}