
/// DB list and print welcome

#include <stdio.h>
#include <string.h>

int main(){
 char *db[4] = {"Ahmed Alaa" , "Sara Sedky" , "Shady Ibrahim" , "Mohamed Ezz"};
 char name[20];
 printf("Enter your name: ");
 gets(name);
 printf("\n");
 for (int i = 0 ; i<4 ; i++)
 {
 (strcmp(name, db[i]) == 0) ? printf("Welcome %s\n", name) : printf("sorry!your name does not exist in the DB.\n");
 break;
 }
return 0;
}
