#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
}*t;
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void addafter ( struct node *, int, int ) ;

int main() {
	struct node *p ;
	p=NULL;
	int n,l;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to append another node? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	do {
		printf("Enter the position after which you want to add another node\n");
		scanf("%d",&l);
		printf("Enter the value\n");
		scanf("%d",&n);
		addafter(p,l,n);
		printf("The elements in the linked list are");
		display(p);
		printf("\n");
		printf("Do you want to add another node after a certain position? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	return 0;
}

void append ( struct node **q, int num ) {
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=num;
	p->link=NULL;
	if(*q==NULL)
	    *q=p;
	else
	    t->link=p;
	t=p;
}

void display ( struct node *q ) {
	while(q!=NULL){
	    printf(" %d",q->data);
	    q=q->link;
	}
}

void addafter ( struct node *q, int loc, int num ) {
	int c=-1;
	struct node *u;
	while(c!=loc && q!=NULL){
	    u=q;
	    q=q->link;
	    c++;
	}
	if(q==NULL)
	    printf("There are less than %d elements in the linked list\n",loc);
	else{
	    struct node *s;
	    s=(struct node*)malloc(sizeof(struct node));
	    u->link=s;
	    s->data=num;
	    s->link=q;
	}
}