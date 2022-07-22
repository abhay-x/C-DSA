#include <stdio.h>
#include <stdlib.h>

struct Event
{
    char name[50];
    char type[50];
    int duration;
    float expenses;
};

int main()
{
    struct Event e1;
    printf("Enter the name of the event: ");
    scanf("%s", e1.name);
    printf("Enter the type of the event: ");
    scanf("%s", e1.type);
    printf("Enter the duration (in days) of this event: ");
    scanf("%d", &e1.duration);
    printf("Enter the projected expenses (in Lakhs) for the event: ");
    scanf("%f", &e1.expenses);

    printf("Event Name: %s\n",e1.name);
    printf("Event type: %s\n",e1.type);
    printf("Event duration: %d\n",e1.duration);
    printf("Event expense: %.2f\n",e1.expenses);
    return 0;
}