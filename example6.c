
/// make a simple calculator using switch

#include <stdio.h>
int main(){

float num1 , num2 , result;
printf("Enter a first number: ");
scanf("%f",&num1);
printf("Enter a second number: ");
scanf("%f",&num2);
char ch;
printf("Enter an operator: ");
scanf(" %c",&ch);
switch(ch)
{
case '+':
    result = num1 + num2;
    break;
case '-':
    result = num1 - num2;
    break;
case '*':
    result = num1 * num2;
    break;
case '/':
    result = num1 / num2;
    break;
}

    printf("Result = %.3f",result);
return 0;
}
