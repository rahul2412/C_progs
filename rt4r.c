#include<stdio.h>
struct employee
{
int id;
char name[30];
struct date
{
int dd;
int mm;
int yy;
}doj;
}e1;
main()
{
printf("enter the details");
scanf("%d",&e1.id);
scanf("%s",e1.name);
scanf("%d",&e1.doj.dd);
scanf("%d",&e1.doj.mm);
scanf("%d",&e1.doj.yy);
printf("%d",e1.id);
printf("%s",e1.name);
printf("%d",e1.doj.dd);
printf("%d",e1.doj.yy);}

