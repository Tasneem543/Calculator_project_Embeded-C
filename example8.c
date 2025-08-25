
/// calculate the power of a number

#include <stdio.h>

int main(){
    int base , exponent , result = 1;
    printf("Enter a base number: ");
    scanf("%d",&base);
    printf("Enter an exponent number: ");
    scanf("%d",&exponent);
    for(int i = 1 ; i <= exponent ; i++)
    {
       result *= base;
    }
     printf("%d to the power of %d = %d",base,exponent,result);
return 0;
}
