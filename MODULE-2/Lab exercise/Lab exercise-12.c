#include<stdio.h>
#include<conio.h>

struct student
{
    char name[100];
    int rollnumber;
    float marks;
}s1[3];

int main()
{
    
    int i;

    for(i=0;i<3;i++)
    {
        printf("\n Enter name: ",i);
        scanf("%s",&s1[i].name);

        printf("\n Enter roll number: ",i);
        scanf("%d",&s1[i].rollnumber);

        printf("\n Enter marks: ",i);
        scanf("%f",&s1[i].marks);
    } 
    
    for(i=0;i<3;i++)
    {
        
        printf("\n  %s",s1[i].name);
        printf("\n  %d",s1[i].rollnumber);
        printf("\n  %f",s1[i].marks);
    }


    return 0;

}