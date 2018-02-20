#include<stdio.h>
struct student
{
int roll;
char name[30];
int marks[3];
int total;
float avg;
};
main()
{
int i;

struct student s;
printf("enter student roll no.");
scanf("%d",&s.roll);
printf("enter name of student");
scanf("%s",s.name);
s.total=0;
for(i=0;i<3;i++)
{
printf("enter marks of %d",i+1);
scanf("%d",&s.marks[i]);
s.total=s.total+s.marks[i];
}
s.avg=s.total/3;
printf("details of students are");
printf("rollno.=%d",s.roll);
printf("name=%s",s.name);
printf("total marks=%d",s.total);
printf("avg=%f",s.avg);
}
