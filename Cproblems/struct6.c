#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    char name[30];
    char department[20];
    int yearOfStudy;
    float cgpa;
};
void getdata(struct Student *a, int n);
void sort(struct Student *a, int n);
void display(struct Student *a, int n);
int main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    struct Student *a;
    a = (struct Student *)malloc(sizeof(struct Student) * n);
    getdata(a, n);
    sort(a, n);
    display(a, n);
    return 0;
}
void getdata(struct Student *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Enter the details of student %d\n", i + 1);
        printf("Enter name\n");
        scanf("%s", (a + i)->name);
        printf("Enter department\n");
        scanf("%s", (a + i)->department);
        printf("Enter year of study\n");
        scanf("%d", &(a + i)->yearOfStudy);
        printf("Enter cgpa\n");
        scanf("%f", &(a + i)->cgpa);
    }
}
void sort(struct Student *a, int n)
{
    int i, j;
    struct Student b;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp((a + i)->name, (a + j)->name) > 0)
            {
                b = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = b;
            }
        }
    }
}
void display(struct Student *a, int n)
{
    int i, m;
    char d[50];
    struct Student b;

    while (1)

    {
        printf("\nMenu");
        printf("\n1)Display names of students from a particular year");
        printf("\n2)Display names of students from a particular department");
        printf("\n3)Display all details of the student having the highest CGPA");
        printf("\n4)Display all details of the student from a particular department having the highest CGPA");
        printf("\n5)Display all details of a particular student (Search by name)");
        printf("\n6)Display all details of all students");
        printf("\n7)Update CGPA of a particular student");
        printf("\n8)Exit");
        printf("Enter your choice\n");
        scanf("%d", &m);
        switch (m)
        {
        case 1:
            printf("Enter the year\n");
            scanf("%d", &b.yearOfStudy);
            printf("Students from Year %d", b.yearOfStudy);
            for (i = 0; i < n; i++)
            {
                if ((a + i)->yearOfStudy == b.yearOfStudy)
                {
                    printf("%s", (a + i)->name);
                }
            }
            break;
        case 2:
            printf("Enter the department\n");
            scanf("%s", b.department);
            printf("Students from Department %s", b.department);
            for (i = 0; i < n; i++)
            {
                if (strcmp((a + i)->department, b.department) == 0)
                {
                    printf("%s", (a + i)->name);
                }
            }
            break;

        case 3:
            printf("Overall Topper Details\n");
            b = *(a + 0);
            for (i = 0; i < n; i++)
            {
                if ((a + i)->cgpa > b.cgpa)
                {
                    b = *(a + i);
                }
            }
            printf("Name:%s\nDepartment:%s\nYear of students:%d\nCGPA:%0.2f\n", b.name, b.department, b.yearOfStudy, b.cgpa);
            break;
        case 4:
            printf("Enter the department\n");
            scanf("%s", d);
            b = *(a + 0);
            for (i = 0; i < n; i++)
            {
                if (strcmp((a + i)->name, d) == 0)
                {
                    if ((a + i)->cgpa > b.cgpa)
                    {
                        b = *(a + i);
                    }
                }
            }
            printf("%s Department Topper Details\n", d);
            printf("Name:%s\nDepartment:%s\nYear of students:%d\nCGPA:%0.2f\n", b.name, b.department, b.yearOfStudy, b.cgpa);
            break;
        case 5:
            printf("Enter the name");
            scanf("%s", d);
            b = *(a + 0);
            for (i = 0; i < n; i++)
            {
                if (strcmp((a + i)->name, d) == 0)
                {
                    b = *(a + i);
                    break;
                }
            }
            printf("Name:%s\nDepartment:%s\nYear of students:%d\nCGPA:%0.2f\n", b.name, b.department, b.yearOfStudy, b.cgpa);
            break;
        case 6:
            for (i = 0; i < n; i++)
            {
                printf("Name:%s\nDepartment:%s\nYear of students:%d\nCGPA:%0.2f\n", b.name, b.department, b.yearOfStudy, b.cgpa);
            }
            break;
        case 7:
            printf("Enter the name\n");
            scanf("%s", d);
            for (i = 0; i < n; i++)
            {
                if (strcmp((a + i)->name, d) == 0)
                {
                    scanf("%f", &(a + i)->cgpa);
                    break;
                }
            }
            break;
        case 8:
            exit(0);
            break;
        }
    }
}