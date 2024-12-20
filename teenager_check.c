/* Input the age of a person and display whether he/she is teenager or not. */
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age = ");
    scanf("%d", &age);
    if(age>=13 && age<=19){
        printf("You are teenager!");
    }
    else{
        printf("You are not a teenager!");
    }
    return 0;
}