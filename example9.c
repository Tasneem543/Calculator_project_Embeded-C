
/// evaluate student degrees

#include <stdio.h>

int main(){
    int student_degree[10];
    int i;
    printf("Enter student degrees:\n");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&student_degree[i]);

    if((student_degree[i] >= 50)&&(student_degree[i] < 65))
    {
        printf("Accepted\n");
    }

    else if((student_degree[i] >= 65)&&(student_degree[i] <= 75))
    {
        printf("Good\n");
    }

    else if((student_degree[i] >= 76)&&(student_degree[i] <= 85))
    {
        printf("Very Good\n");
    }

    else if((student_degree[i] >= 86)&&(student_degree[i] <= 100))
    {
        printf("Excellent\n");
    }
    else if((student_degree[i] >= 0)&&(student_degree[i] < 50))
    {
        printf("Failed\n");
    }
    else
    {
        printf("Enter a valid number\n");
    }
    }
return 0;
}
