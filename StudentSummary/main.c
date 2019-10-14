#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE * fpointer = fopen("studentsummary.txt", "w");

printf("Hi! What is your name?");
char name[100];
scanf("%[^\n]s", &name);
fprintf(fpointer, "Name: %s\n", name);


printf("What College/University Do You Attend?");
char school[50];
char type[30];
scanf("%s%s", &school, &type);
fprintf(fpointer, "School: %s %s\n", school, type);

fclose(fpointer);

    return 0;
}
