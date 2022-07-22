#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
}*t;
void append ( struct node **, int ) ;
void display ( struct node * ) ;
int search (struct node *, int);


int main() {
	struct node *p ;
	p=NULL;
	int n,ele;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	printf("Enter the element to be searched\n");
	scanf("%d",&ele);
	if(search(p,ele))
		printf("%d is present in the linked list\n",ele);
	else
		printf("%d is not present in the linked list\n",ele);
	return 0;
}


void append ( struct node **q, int num ) {
	struct node *s;
	s=(struct node*)malloc(sizeof(struct node));
	s->data=num;
	s->link=NULL;
	if(*q==NULL)
	    *q=s;
	else
	    t->link=s;
	t=s;
}

void display ( struct node *q ) {
	while(q!=NULL){
	    printf(" %d",q->data);
	    q=q->link;
	}
}
int search ( struct node *q, int e ) {
    int c=0;
    while(q!=NULL){
        if(q->data==e){
            c=1;
            break;
        }
        q=q->link;
    }
    return c;
}