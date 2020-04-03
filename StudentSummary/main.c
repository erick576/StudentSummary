#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * fpointer = fopen("studentsummary.txt", "w");

    printf("Hi! What is your name?\n");

    char name[100];
    scanf("%[^\n]s", name);
    fprintf(fpointer, "Name: %s\n", name);


    printf("What College/University Do You Attend?\n");
    char school[50], type[50];
    scanf("%s %s", school, type);
    fprintf(fpointer, "School: %s\n", school);

    printf("How many courses are you currently taking?\n");
    int num;
    scanf("%d", &num);
    fprintf(fpointer, "Number Of Courses: %i\n", num);
    int i = 1;
    float gpa;
    while(i <= num)
    {
        printf("Course %d Name?\n", i);
        char course[10];
        scanf("%s", course);

        printf("What is Your Grade in %s?\n", course);

        float cg;
        scanf("%f",  &cg);
        gpa = gpa + cg;
        fprintf(fpointer, "Course %d: %s\n", i, course);
        i ++;
    }

    float cgpa = gpa / num;
    fprintf(fpointer, "GPA: %f", cgpa);
    fclose(fpointer);

    return 0;
}
