/*
Input a number and display whether it is divisible by 5 or not

*/
#include <stdio.h>

int main()
{
  int x;
  printf("Enter the value of x :")  ;
  scanf("%d", &x);
  if(x%5==0){
    printf("The number is divisible by 5");
  }
   else{
    printf("The number is not divisible by 5");
  }

    return 0;
}