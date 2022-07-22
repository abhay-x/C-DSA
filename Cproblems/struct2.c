struct Date
{
    int day;
    char month[50];
    char year[50];
};

struct Event
{
    char name[50];
    char type[50];
    int duration;
    float expenses;
    struct Date scheduledDate;
};

int main()
{
    struct Event e1;
    printf("Enter the name of the event\n");
    scanf("%[^\n]%*c", e1.name);
    printf("Enter the type of the event\n");
    scanf("%s", e1.type);
    printf("Enter the duration of the event\n");
    scanf("%d", &e1.duration);
    printf("Enter the projected expenses (in lakhs) for the event\n");
    scanf("%f", &e1.expenses);
    printf("Enter the day of the event\n");
    scanf("%d", &e1.scheduledDate.day);
    printf("Enter the month of the event\n");
    scanf("%s", e1.scheduledDate.month);
    printf("Enter the year of the event\n");
    scanf("%d", &e1.scheduledDate.year);
    printf("Event Name : %s\n", e1.name);
    printf("Event Type : %s\n", e1.type);
    printf("Event Duration : %d\n", e1.duration);
    printf("Projected Expense : %.1fL\n", e1.expenses);
    printf("Event Date : %d %s %d\n", e1.scheduledDate.day, e1.scheduledDate.month, e1.scheduledDate.year);
    return 0;
}