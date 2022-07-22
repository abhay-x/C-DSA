#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct crop
{
    char cropName[30];
    float weight;
    int cost;
}*cr,temp;
int main()
{
    int n,i,j;
    printf("Enter the number of Crops\n");
    scanf("%d",&n);
    cr=(struct crop*)malloc(n*sizeof(struct crop));
    for(i=0;i<n;i++)
    {
        printf("Enter the details of Crop %d\n",i+1);
        printf("Enter name\n");
        scanf("%s",(cr+i)->cropName);
        printf("Enter Weight\n");
        scanf("%f",&(cr+i)->weight);
        printf("Enter Cost\n");
        scanf("%d",&(cr+i)->cost);
    }
    //arrange the crop names in ascending order
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strcmp((cr+j)->cropName,(cr+i)->cropName)>0)
            {
                temp=*(cr+i);
                *(cr+i)=*(cr+j);
                *(cr+j)=temp;
            }
        }
    }
    printf("Details of Crops\n");
    for(i=0;i<n;i++)
    {
        printf("Crop %d\n",i+1);
        printf("Name :%s\n",(cr+i)->cropName);
        printf("Weight :%.2f\n",(cr+i)->weight);
        printf("Cost :%d\n",(cr+i)->cost);
    }
	return 0;
}