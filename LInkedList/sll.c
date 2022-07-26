#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
// declare fn before to avoid [-Wimplicit-function-declaration] error
void create(struct node *, struct node *);
void display(struct node *);
void addNode(struct node *);

int main()
{
    struct node *head = NULL, *tail = NULL;
    int opt;
    do
    {
        printf("\n0.Exit Program\n");
        printf("1.Create a New Linked List\n");
        printf("2.Display Linked List\n");
        printf("3.Add nodes\n");
        printf("Choose From the Option Menu: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            create(head, tail);
            break;
        case 2:
            display(head);
            break;
        case 3:
            appeend(head);
            break;

        default:
            break;
        }
    } while (opt != 0);
    printf("Exiting Program...\nHave a Nice Day !!\n\n");
    return 0;
}

void create(struct node *head, struct node *tail)
{
    printf("\nCreating a New Linked LIst...\n");
    struct node *node;
    int n;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    while (n > 0)
    {
        // creating node
        node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the Data:");
        scanf("%d", &node->data);
        node->link = NULL;
        // assign node to head or at tail if head is not NULL
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->link = node;
            tail = node;
        }
        n--;
    }
    display(head);
    return;
}

void display(struct node *cursor)
{
    if (cursor == NULL)
    {
        printf("\nLinked list is Empty\n");
        return;
    }
    printf("\nThe Elements in the linked list are: ");
    while (cursor != NULL)
    {
        printf("%d, ", cursor->data);
        cursor = cursor->link;
    }
    printf("\n............................\n");
    return;
}

void addNode(struct node *head)
{
    struct node *node;
    int data, opt;
    node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->link = NULL;
    do
    {
        printf("\n0.Exit Add Nodes\n");
        printf("1.Add at Front \n");
        printf("2.Add at Position\n");
        printf("3.Add at Rear\n");
        printf("Choose From the Option Menu: ");
        scanf("%d", &opt);
    } while (opt != 0);

    switch (opt)
    {
    case 1:
        addBeg(node);
        break;
    default:
        break;
    }
}