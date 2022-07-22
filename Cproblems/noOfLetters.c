#include <stdio.h>
int main()
{
    char name[50];
    int i, len = 0;
    printf("Enter the name\n");
    scanf("%s", name);
    for (i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    printf("The number of letters in the name is %d", len);
    return 0;
}