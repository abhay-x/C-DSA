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
void delafter(struct node *, int);

int main()
{
    struct node *p;
    p = NULL;
    int n, l;
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
    do
    {
        printf("Enter the position after which you want to delete another node\n");
        scanf("%d", &l);
        delafter(p, l);
        printf("The elements in the linked list are");
        display(p);
        printf("\n");
        printf("Do you want to delete another node after a certain position? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
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

void delafter(struct node *q, int loc)
{
    int c = 0;
    struct node *r;
    while (c != loc && q->link != NULL)
    {
        r = q;
        q = q->link;
        c++;
    }
    if (c != loc)
        printf("Invalid position\n");
    else
    {
        r->link = q->link;
        free(q);
    }
}