/* Input the age of a person and display whether he/she is a voter or not. */
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age =");
    scanf("%d", &age);
     if(age>=18){
        printf("You can vote!");
     }
     else{
        printf("You are not a voter!");
     }
    return 0;
}