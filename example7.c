
/// calculate factors of a number

#include <stdio.h>

int main(){
    int number;
    printf("Enter an integer positive number: ");
    scanf("%d",&number);
    printf("Factors of %d are: ",number);
    for(int i = 1 ; i<=number ; i++)
    {
        if(number%i == 0)
        {
            printf("%d ",i);
        }
    }
return 0;
}
