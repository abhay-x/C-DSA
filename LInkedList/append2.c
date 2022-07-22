#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int id;
    char name[10];
    char gender[10];
    struct student *prev;
    struct student *next;
} * t;
void append(struct student **, struct student);
void display(struct student *);
int main()
{
    struct student *p;
    struct student s;
    p = NULL;
    char ch[10];
    do
    {
        printf("Enter the id\n");
        scanf("%d", &s.id);
        printf("Enter the name\n");
        scanf("%s", s.name);
        printf("Enter the gender\n");
        scanf("%s", s.gender);
        s.prev = NULL;
        s.next = NULL;
        append(&p, s);
        printf("Do you want to add details of another student? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The details of the students are\n");
    printf("%4s %10s %7s\n", "ID", "Name", "Gender");
    display(p);
    return 0;
}

void append(struct student **q, struct student s)
{
    struct student *r;
    r = (struct student *)malloc(sizeof(struct student));
    *r = s;
    if (*q == NULL)
        *q = r;
    else
    {
        t->next = r;
        r->prev = t;
    }
    t = r;
}

void display(struct student *q)
{
    while (q != NULL)
    {
        printf("%4d %10s %7s \n", q->id, q->name, q->gender);
        q = q->next;
    }
}