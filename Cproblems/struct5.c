#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void getval(int);
void display(int);
void sort(int);
struct Building
{
    char name[100];
    float length;
    float width;
    float height;
    float ratePerSqFt;
} * b0;
void getval(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of building %d\n", i + 1);
        printf("Enter name\n");
        scanf("%s", (b0 + i)->name);
        printf("Enter length\n");
        scanf("%f", &(b0 + i)->length);
        printf("Enter width\n");
        scanf("%f", &(b0 + i)->width);
        printf("Enter height\n");
        scanf("%f", &(b0 + i)->height);
        printf("Enter rate per square feet\n");
        scanf("%f", &(b0 + i)->ratePerSqFt);
    }
}
void sort(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (strcmp((b0 + j)->name, (b0 + i)->name) > 0)
            {
                struct Building temp;
                temp = *(b0 + i);
                *(b0 + i) = *(b0 + j);
                *(b0 + j) = temp;
            }
        }
}
void display(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Details of building %d\n", i + 1);
        printf("Name : %s\n", (b0 + i)->name);
        printf("Area : %.2f\n", (2 * ((b0 + i)->length) * ((b0 + i)->width)) + (2 * ((b0 + i)->width) * ((b0 + i)->height)) + (2 * ((b0 + i)->height) * ((b0 + i)->length)));
        printf("Value : %.2f\n", ((2 * ((b0 + i)->length) * ((b0 + i)->width)) + (2 * ((b0 + i)->width) * ((b0 + i)->height)) + (2 * ((b0 + i)->height) * ((b0 + i)->length))) * (b0 + i)->ratePerSqFt);
    }
}

int main()
{
    int n;
    printf("Enter the number of buildings\n");
    scanf("%d", &n);
    b0 = (struct Building *)malloc(n * sizeof(struct Building));
    getval(n);
    sort(n);
    display(n);
    return 0;
}