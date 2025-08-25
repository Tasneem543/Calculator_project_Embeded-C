
/// program to check palindrome or not

#include <stdio.h>
int main(){
    int num, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    if (reversed == original)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

return 0;
   }
