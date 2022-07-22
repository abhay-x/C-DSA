#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *link;
} * t;
void append(struct node **, int);
void display(struct node *);
int findmax(struct node *);

int main()
{
    struct node *p;
    p = NULL;
    int n;
    char ch[10];
    do
    {
        printf("Enter the value\n");
        scanf("%d", &n);
        append(&p, n);
        printf("Do you want to add another node? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The elements in the linked list are");
    display(p);
    printf("\n");
    printf("The maximum element in the linked list is %d\n", findmax(p));
    return 0;
}

void append(struct node **q, int num)
{
    struct node *s;
    s = (struct node *)malloc(sizeof(struct node));
    s->data = num;
    s->link = NULL;
    if (*q == NULL)
        *q = s;
    else
        t->link = s;
    t = s;
}

void display(struct node *q)
{
    while (q != NULL)
    {
        printf(" %d", q->data);
        q = q->link;
    }
}

int findmax(struct node *q)
{
    int s = q->data;
    while (q != NULL)
    {
        if (s < q->data)
            s = q->data;
        q = q->link;
    }
    return s;
}