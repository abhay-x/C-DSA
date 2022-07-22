#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Date
{
    int dd;
    int mm;
    int yyyy;
};
struct Crop
{
    char name[30];
    float rainfall;
    int temperature;
    struct Date sowDate;
    struct Date harvestDate;
};
int main()
{
    int n, i, m, j;
    struct Crop a[5], c;
    struct Date b, d;
    printf("Enter the number of Crops\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the details of Crops %d\n", i);
        printf("Enter name\n");
        scanf("%s", a[i].name);
        printf("Enter rainfall\n");
        scanf("%f", &a[i].rainfall);
        printf("Enter temperature\n");
        scanf("%d", &a[i].temperature);
        printf("Enter sowDate\n");
        scanf("%d %d %d", &b.dd, &b.mm, &b.yyyy);
        a[i].sowDate = b;
        printf("Enter harvestDate\n");
        scanf("%d %d %d", &b.dd, &b.mm, &b.yyyy);
        a[i].harvestDate = b;
    }
    while (1)
    {
        printf("\nMenu\n");
        printf("1)Crop that needs the highest rainfall\n");
        printf("2)Crop that needs the highest temperature\n");
        printf("3)Display the crop sorted in ascending order of the sowDate\n");
        printf("4)Display the crop sorted in ascending order of the harvestDate\n");
        printf("Enter your Choice\n");
        scanf("%d", &m);
        switch (m)
        {
        case 1:
            c.rainfall = a[1].rainfall;
            strcpy(c.name, a[1].name);
            for (i = 1; i <= n; i++)
            {
                if (a[i].rainfall > c.rainfall)
                {
                    c.rainfall = a[i].rainfall;
                    strcpy(c.name, a[i].name);
                }
            }
            printf("Crop that needs the highest rain fall is %s", c.name);
            break;
        case 2:
            c.temperature = a[1].temperature;
            strcpy(c.name, a[1].name);
            for (i = 1; i <= n; i++)
            {
                if (a[i].temperature >= c.temperature)
                {
                    c.temperature = a[i].temperature;
                    strcpy(c.name, a[i].name);
                }
            }
            printf("Crop that needs the highest temperature is %s", c.name);
            break;
        case 3:
            for (i = n; i >= 1; i--)
            {
                for (j = 1; j <= i - 1; j++)
                {
                    b = a[j].sowDate;
                    d = a[j + 1].sowDate;
                    if (b.dd > d.dd)
                    {
                        c = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = c;
                    }
                }
            }
            for (i = 1; i <= n; i++)
            {
                b = a[i].sowDate;
                d = a[i].harvestDate;
                printf("%s\n%0.2f\n%d\n%d %d %d\n%d %d %d\n", a[i].name, a[i].rainfall, a[i].temperature, b.dd, b.mm, b.yyyy, d.dd, d.mm, d.yyyy);
            }
            break;
        case 4:
            for (i = n; i >= 1; i--)
            {
                for (j = 1; j <= i - 1; j++)
                {
                    b = a[j].harvestDate;
                    d = a[j + 1].harvestDate;
                    if (b.dd > d.dd)
                    {
                        c = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = c;
                    }
                }
            }
            for (i = 1; i <= n; i++)
            {
                b = a[i].sowDate;
                d = a[i].harvestDate;
                printf("%s\n%0.2f\n%d\n%d %d %d\n%d %d %d\n", a[i].name, a[i].rainfall, a[i].temperature, b.dd, b.mm, b.yyyy, d.dd, d.mm, d.yyyy);
            }
            break;
        default:
            printf("EXIT");
            exit(0);
        }
    }
}