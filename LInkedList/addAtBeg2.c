#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
} * t;

void d_addatbeg(struct dnode **, int);
void d_display(struct dnode *);

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
        d_addatbeg(&p, n);
        printf("Do you want to add another node? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The elements in the doubly linked list are");
    d_display(p);
    printf("\n");
    return 0;
}

void d_addatbeg(struct dnode **s, int num)
{
    struct dnode *r;
    r = (struct dnode *)malloc(sizeof(struct dnode));
    r->prev = NULL;
    r->data = num;
    r->next = *s;
    *s = r;
}
//  r->prev=NULL;
// 	r->data=num;
// 	r->next=NULL;
// 	if(*s==NULL)
// 	    *s=r;
// 	else{
// 	    r->prev=t;
// 	    t->next=r;
// 	}
// 	t=r;
// }

void d_display(struct dnode *q)
{
    while (q != NULL)
    {
        printf(" %d", q->data);
        q = q->next;
    }
}