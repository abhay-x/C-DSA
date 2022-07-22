#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
} * t;

void d_append(struct dnode **, int);
void d_display(struct dnode *);
void d_delete_beg(struct dnode **);

int main()
{
    struct dnode *p;
    p = NULL;
    int n;
    char ch[10];
    do
    {
        printf("Enter the value\n");
        scanf("%d", &n);
        d_append(&p, n);
        printf("Do you want to add another node? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The elements in the doubly linked list are");
    d_display(p);
    printf("\n");
    d_delete_beg(&p);
    printf("The elements in the doubly linked list after deleting an element are");
    d_display(p);
    printf("\n");
    d_delete_beg(&p);
    printf("The elements in the doubly linked list after deleting another element are");
    d_display(p);
    printf("\n");
    return 0;
}

void d_append(struct dnode **s, int num)
{
    struct dnode *r;
    r = (struct dnode *)malloc(sizeof(struct dnode));
    r->prev = NULL;
    r->data = num;
    r->next = NULL;
    if (*s == NULL)
        *s = r;
    else
    {
        t->next = r;
        r->prev = t;
    }
    t = r;
}

void d_display(struct dnode *q)
{
    while (q != NULL)
    {
        printf(" %d", q->data);
        q = q->next;
    }
}

void d_delete_beg(struct dnode **s)
{
    struct dnode *r;
    r = (*s);
    *s = (*s)->next;
    free(r);
}